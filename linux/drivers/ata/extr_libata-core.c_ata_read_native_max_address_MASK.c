
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ata_taskfile {int flags; int feature; int device; int protocol; int command; } ;
struct ata_device {int horkage; int id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ata_device*,char*,unsigned int) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_device*,struct ata_taskfile*) ;
 scalar_t__ FUNC_4 (struct ata_taskfile*) ;
 scalar_t__ FUNC_5 (struct ata_taskfile*) ;

__attribute__((used)) static int FUNC_6(struct ata_device *VAR_13, u64 *VAR_14)
{
 unsigned int VAR_15;
 struct ata_taskfile VAR_16;
 int VAR_17 = FUNC_2(VAR_13->id);

 FUNC_3(VAR_13, &VAR_16);


 VAR_16.flags |= VAR_7 | VAR_8;

 if (VAR_17) {
  VAR_16.command = VAR_3;
  VAR_16.flags |= VAR_9;
 } else
  VAR_16.command = VAR_2;

 VAR_16.protocol = VAR_6;
 VAR_16.device |= VAR_5;

 VAR_15 = FUNC_1(VAR_13, &VAR_16, ((void*)0), VAR_10, ((void*)0), 0, 0);
 if (VAR_15) {
  FUNC_0(VAR_13,
        "failed to read native max address (err_mask=0x%x)\n",
        VAR_15);
  if (VAR_15 == VAR_0 && (VAR_16.feature & VAR_1))
   return -VAR_11;
  return -VAR_12;
 }

 if (VAR_17)
  *VAR_14 = FUNC_5(&VAR_16) + 1;
 else
  *VAR_14 = FUNC_4(&VAR_16) + 1;
 if (VAR_13->horkage & VAR_4)
  (*VAR_14)--;
 return 0;
}
