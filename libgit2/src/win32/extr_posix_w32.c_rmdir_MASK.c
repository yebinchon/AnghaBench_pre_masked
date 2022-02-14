
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_path ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const*) ;

int FUNC_3(const char* VAR_3)
{
 git_win32_path VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_4, VAR_3) < 0)
  return -1;

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 == -1) {
  switch (FUNC_0()) {




   case 128:
    VAR_2 = VAR_0;
    break;


   case 129:
    VAR_2 = VAR_1;
    break;
  }
 }

 return VAR_5;
}
