
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == -1) {
  FUNC_4();
  FUNC_1(1, "invalid color '%s'", VAR_1);
 }
 if (FUNC_3(0, VAR_0, VAR_2) != 0) {
  FUNC_4();
  FUNC_0(1, "ioctl(KD_SBORDER)");
 }
}
