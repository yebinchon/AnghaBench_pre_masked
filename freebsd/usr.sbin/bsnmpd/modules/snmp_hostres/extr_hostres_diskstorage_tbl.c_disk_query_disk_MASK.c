
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk_entry {char* dev_name; int capacity; int index; } ;
typedef int off_t ;
typedef int dev_path ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct disk_entry *VAR_6)
{
 char VAR_7[128];
 int VAR_8;
 off_t VAR_9;

 if (VAR_6 == ((void*)0) || VAR_6->dev_name[0] == '\0')
  return;

 FUNC_5(VAR_7, sizeof(VAR_7),
     "%s%s", VAR_4, VAR_6->dev_name);
 VAR_6->capacity = 0;

 FUNC_0("OPENING device %s", VAR_7);
 if ((VAR_8 = FUNC_3(VAR_7, VAR_3|VAR_2)) == -1) {
  FUNC_0("OPEN device %s failed: %s", VAR_7, FUNC_6(VAR_5));
  return;
 }

 if (FUNC_2(VAR_8, VAR_0, &VAR_9) < 0) {
  FUNC_0("DIOCGMEDIASIZE for device %s failed: %s",
      VAR_7, FUNC_6(VAR_5));
  (void)FUNC_1(VAR_8);
  return;
 }

 VAR_9 = VAR_9 / 1024;
 VAR_6->capacity = (VAR_9 > VAR_1 ? VAR_1 : VAR_9);
 FUNC_4(VAR_6->index, VAR_6->dev_name);

 (void)FUNC_1(VAR_8);
}
