
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ata_device {scalar_t__* gscr; int link; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ata_device*,char*,...) ;
 unsigned int FUNC_1 (int ,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct ata_device *VAR_2)
{
 unsigned int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_1(VAR_2->link, VAR_1, &VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_2,
       "failed to read PMP product ID (Emask=0x%x)\n",
       VAR_3);
  return -VAR_0;
 }

 if (VAR_4 != VAR_2->gscr[VAR_1]) {
  FUNC_0(VAR_2, "PMP product ID mismatch\n");

  return -VAR_0;
 }

 return 0;
}
