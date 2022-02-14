
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(int *VAR_6, git_repository *VAR_7, const char *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_2(&VAR_10, VAR_7, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_10 == VAR_2)
  VAR_10 = !FUNC_3(VAR_7);

 *VAR_6 = 0;
 switch (VAR_10) {
 case 129:
  *VAR_6 = 0;
  break;

 case 128:



  *VAR_6 = FUNC_4(VAR_7, VAR_8) ||
   !FUNC_0(VAR_8, VAR_3) ||
   !FUNC_1(VAR_8, VAR_1) ||
   !FUNC_0(VAR_8, VAR_5) ||
   !FUNC_0(VAR_8, VAR_4);
  break;

 case 130:
  *VAR_6 = 1;
  break;
 }

 return 0;
}
