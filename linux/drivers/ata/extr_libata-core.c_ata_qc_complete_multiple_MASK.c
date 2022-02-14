
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct ata_queued_cmd {int dummy; } ;
struct ata_port {unsigned long long qc_active; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned long long) ;
 int FUNC_1 (struct ata_port*,char*,unsigned long long,unsigned long long) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_3 (struct ata_port*,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned long long) ;

int FUNC_5(struct ata_port *VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5 = VAR_2->qc_active;
 int VAR_6 = 0;






 if (VAR_5 & (1ULL << VAR_0)) {
  VAR_3 |= (VAR_3 & 0x01) << VAR_0;
  VAR_3 ^= VAR_3 & 0x01;
 }

 VAR_4 = VAR_5 ^ VAR_3;

 if (FUNC_4(VAR_4 & VAR_3)) {
  FUNC_1(VAR_2, "illegal qc_active transition (%08llx->%08llx)\n",
        VAR_2->qc_active, VAR_3);
  return -VAR_1;
 }

 while (VAR_4) {
  struct ata_queued_cmd *VAR_7;
  unsigned int VAR_8 = FUNC_0(VAR_4);

  VAR_7 = FUNC_3(VAR_2, VAR_8);
  if (VAR_7) {
   FUNC_2(VAR_7);
   VAR_6++;
  }
  VAR_4 &= ~(1ULL << VAR_8);
 }

 return VAR_6;
}
