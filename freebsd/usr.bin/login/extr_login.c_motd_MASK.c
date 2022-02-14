
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4)
{
 struct sigaction VAR_5, VAR_6;
 FILE *VAR_7;
 int VAR_8;

 if ((VAR_7 = FUNC_3(VAR_4, "r")) == ((void*)0))
  return (-1);
 VAR_2 = 0;
 VAR_5.sa_handler = VAR_3;
 VAR_5.sa_flags = 0;
 FUNC_6(&VAR_5.sa_mask);
 FUNC_5(VAR_1, &VAR_5, &VAR_6);
 while ((VAR_8 = FUNC_2(VAR_7)) != VAR_0 && !VAR_2)
  FUNC_4(VAR_8);
 FUNC_5(VAR_1, &VAR_6, ((void*)0));
 if (VAR_8 != VAR_0 || FUNC_1(VAR_7)) {
  FUNC_0(VAR_7);
  return (-1);
 }
 FUNC_0(VAR_7);
 return (0);
}
