
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_mapping {int dummy; } ;
struct file_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 () ;
 void* VAR_6 ;
 scalar_t__ FUNC_11 (char*) ;

int
FUNC_12(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10 = 0;

 FUNC_0(sizeof(struct file_header) == 32);
 FUNC_0(sizeof(struct file_mapping) == 8);

 while ((VAR_9 = FUNC_4(VAR_7, VAR_8, "h:vw:")) != -1) {
  switch (VAR_9) {
  case 'h':
   VAR_3 = FUNC_1(VAR_4);
   break;
  case 'v':
   VAR_10 = 1;
   break;
  case 'w':
   VAR_6 = FUNC_1(VAR_4);
   break;
  case '?':
  default:
   FUNC_10();
  }
 }
 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;

 if (VAR_7 < 2 || VAR_7 > 3)
  FUNC_10();

 FUNC_9(VAR_6);
 FUNC_8(VAR_3);

 if (FUNC_6(VAR_8[0], VAR_2) != 0)
  return (1);
 VAR_7--;
 VAR_8++;
 if (VAR_7 == 2) {
  if (FUNC_6(VAR_8[0], VAR_0) != 0)
   return (1);
  VAR_7--;
  VAR_8++;
 }
 FUNC_5();
 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
 FUNC_3(0);
 FUNC_3(1);
 FUNC_3(2);
 FUNC_3(3);
 if (FUNC_11(VAR_8[0]) != 0)
  return (1);

 if (VAR_10)
  FUNC_7();

 return (0);
}
