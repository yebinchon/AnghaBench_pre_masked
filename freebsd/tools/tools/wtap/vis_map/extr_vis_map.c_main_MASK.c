
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int op; void* id2; void* id1; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct link*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const**) ;

int
FUNC_7(int VAR_2, const char* VAR_3[])
{
 struct link VAR_4;
 char VAR_5;

 if (VAR_2 < 2) {
  FUNC_6(VAR_3);
  FUNC_1(1);
 }

 VAR_1 = FUNC_3("/dev/visctl", VAR_0);
  if (VAR_1 < 0) {
   FUNC_4("error opening visctl cdev\n");
   FUNC_1(1);
 }

 VAR_5 = (char)*VAR_3[1];

 switch (VAR_5) {
 case 'o':
  FUNC_5(1);
  break;
 case 'c':
  FUNC_5(0);
  break;
 case 'a':
  if (VAR_2 < 4) {
   FUNC_6(VAR_3);
   FUNC_1(1);
  }
  VAR_4.op = 1;
  VAR_4.id1 = FUNC_0(VAR_3[2]);
  VAR_4.id2 = FUNC_0(VAR_3[3]);
  FUNC_2(&VAR_4);
  break;
 case 'd':
  if (VAR_2 < 4) {
   FUNC_6(VAR_3);
   FUNC_1(1);
  }
  VAR_4.op = 0;
  VAR_4.id1 = FUNC_0(VAR_3[2]);
  VAR_4.id2 = FUNC_0(VAR_3[3]);
  FUNC_2(&VAR_4);
  break;
 default:
  FUNC_4("wtap ioctl: unknown command '%c'\n", *VAR_3[1]);
  FUNC_1(1);
 }
 FUNC_1(0);
}
