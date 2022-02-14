
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct ata_port {int * sector_buf; } ;
struct ata_device {int flags; int id; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*,char*,...) ;
 int FUNC_1 (struct ata_device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_device*,int ) ;
 unsigned int FUNC_4 (struct ata_device*,int ,int ,int *,int) ;
 unsigned long long FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ata_device *VAR_3)
{
 struct ata_port *VAR_4 = VAR_3->link->ap;
 u64 VAR_5;
 unsigned int VAR_6;

 if (!FUNC_2(VAR_3->id))
  return;

 if (!FUNC_3(VAR_3, VAR_2)) {
  FUNC_1(VAR_3,
        "Security Log not supported\n");
  return;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_1, VAR_2,
   VAR_4->sector_buf, 1);
 if (VAR_6) {
  FUNC_0(VAR_3,
       "failed to read Security Log, Emask 0x%x\n", VAR_6);
  return;
 }

 VAR_5 = FUNC_5(&VAR_4->sector_buf[40]);
 if (!(VAR_5 & (1ULL << 63))) {
  FUNC_0(VAR_3,
       "Trusted Computing capability qword not valid!\n");
  return;
 }

 if (VAR_5 & (1 << 0))
  VAR_3->flags |= VAR_0;
}
