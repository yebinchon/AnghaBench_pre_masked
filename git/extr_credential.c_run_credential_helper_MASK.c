
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int dummy; } ;
struct child_process {char const** argv; int use_shell; int in; int out; int no_stdout; } ;
typedef int FILE ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct credential*,int *) ;
 int FUNC_1 (struct credential*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int * FUNC_7 (int,char*) ;

__attribute__((used)) static int FUNC_8(struct credential *VAR_3,
     const char *VAR_4,
     int VAR_5)
{
 struct child_process VAR_6 = VAR_0;
 const char *VAR_7[] = { ((void*)0), ((void*)0) };
 FILE *VAR_8;

 VAR_7[0] = VAR_4;
 VAR_6.argv = VAR_7;
 VAR_6.use_shell = 1;
 VAR_6.in = -1;
 if (VAR_5)
  VAR_6.out = -1;
 else
  VAR_6.no_stdout = 1;

 if (FUNC_6(&VAR_6) < 0)
  return -1;

 VAR_8 = FUNC_7(VAR_6.in, "w");
 FUNC_5(VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_8);
 FUNC_2(VAR_8);
 FUNC_4(VAR_1);

 if (VAR_5) {
  int VAR_9;
  VAR_8 = FUNC_7(VAR_6.out, "r");
  VAR_9 = FUNC_0(VAR_3, VAR_8);
  FUNC_2(VAR_8);
  if (VAR_9 < 0) {
   FUNC_3(&VAR_6);
   return -1;
  }
 }

 if (FUNC_3(&VAR_6))
  return -1;
 return 0;
}
