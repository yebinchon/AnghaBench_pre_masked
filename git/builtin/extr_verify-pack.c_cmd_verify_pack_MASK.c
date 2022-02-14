
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option const FUNC_1 (char,char*,unsigned int*,int ,int ) ;
 struct option const FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_5 (int ,struct option const*) ;
 scalar_t__ FUNC_6 (char const*,unsigned int) ;
 int VAR_3 ;

int FUNC_7(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 int VAR_9;
 const struct option VAR_10[] = {
  FUNC_1('v', "verbose", &VAR_8, FUNC_0("verbose"),
   VAR_1),
  FUNC_1('s', "stat-only", &VAR_8, FUNC_0("show statistics only"),
   VAR_0),
  FUNC_2()
 };

 FUNC_3(VAR_2, ((void*)0));
 VAR_4 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_10,
        VAR_3, 0);
 if (VAR_4 < 1)
  FUNC_5(VAR_3, VAR_10);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_6(VAR_5[VAR_9], VAR_8))
   VAR_7 = 1;
 }

 return VAR_7;
}
