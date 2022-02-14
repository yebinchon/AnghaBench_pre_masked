
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct fs*,char*) ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (int,struct fs**,int ) ;
 int FUNC_9 (int,struct fs*,char*) ;
 int FUNC_10 (char*,...) ;

void
FUNC_11(char *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct fs *VAR_4;

 FUNC_2(-1, ((void*)0), 0);
 FUNC_4();
 FUNC_3();
 if ((VAR_3 = FUNC_5(VAR_1,0)) < 0) {
  FUNC_10("%s", VAR_1);
  FUNC_0(VAR_3);
  return;
 }
 switch (FUNC_8(VAR_3, &VAR_4, VAR_0)) {
 case 0:
  break;
 case 128:
  FUNC_10("Cannot find file system superblock");
  FUNC_0(VAR_3);
  return;
 default:
  FUNC_10("Unable to read file system superblock");
  FUNC_0(VAR_3);
  return;
 }
 FUNC_6("%s:",VAR_1);
 if (VAR_2)
  FUNC_6(" (%s)",VAR_2);
 FUNC_7('\n');
 FUNC_1)(VAR_3, VAR_4, VAR_1);
 FUNC_0(VAR_3);
}
