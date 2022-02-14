
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpt_standalone_disk {char* devname; } ;
struct mpt_drive_list {int ndrives; TYPE_1__** drives; } ;
struct TYPE_3__ {int PhysDiskNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct mpt_standalone_disk*) ;
 scalar_t__ FUNC_2 (int,int*,struct mpt_standalone_disk**) ;
 int FUNC_3 (struct mpt_drive_list*) ;
 int FUNC_4 (int) ;
 struct mpt_drive_list* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (struct mpt_standalone_disk*,int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(int VAR_4, char **VAR_5)
{
 struct mpt_drive_list *VAR_6;
 struct mpt_standalone_disk *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_4 != 1) {
  FUNC_12("show drives: extra arguments");
  return (VAR_0);
 }

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 < 0) {
  VAR_8 = VAR_2;
  FUNC_11("mpt_open");
  return (VAR_8);
 }


 VAR_6 = FUNC_5(VAR_9);
 if (VAR_6 == ((void*)0)) {
  VAR_8 = VAR_2;
  FUNC_0(VAR_9);
  FUNC_11("Failed to get drive list");
  return (VAR_8);
 }


 VAR_13 = 0;
 if (FUNC_2(VAR_9, &VAR_12, &VAR_7) != 0) {
  VAR_12 = 0;
  VAR_7 = ((void*)0);
 }
 if (VAR_12 != 0)
  VAR_13 = FUNC_10(VAR_1);


 for (VAR_10 = 0; VAR_10 < VAR_6->ndrives; VAR_10++) {
  VAR_11 = FUNC_10(FUNC_6(VAR_6->drives[VAR_10]));
  if (VAR_11 > VAR_13)
   VAR_13 = VAR_11;
 }


 FUNC_9("mpt%d Physical Drives:\n", VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_6->ndrives; VAR_10++) {
  FUNC_9("%4u ", VAR_6->drives[VAR_10]->PhysDiskNum);
  FUNC_7(VAR_6->drives[VAR_10], VAR_13, 1);
  FUNC_9("\n");
 }
 FUNC_3(VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  FUNC_9("%4s ", VAR_7[VAR_10].devname);
  FUNC_8(&VAR_7[VAR_10], VAR_13, 1);
  FUNC_9("\n");
 }
 FUNC_1(VAR_7);

 FUNC_0(VAR_9);

 return (0);
}
