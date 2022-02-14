
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_6 (char const*) ;

int FUNC_7(
 git_buf *VAR_2,
 git_buf *VAR_3,
 const char *VAR_4,
 void *VAR_5)
{
 const char *VAR_6 = "magic word: pretty please";
 const char *VAR_7 = "magicsig";

 FUNC_0(0, FUNC_4(VAR_2));
 FUNC_0(0, FUNC_4(VAR_3));
 FUNC_2(VAR_1, VAR_4);
 FUNC_1(((void*)0), VAR_5);

 FUNC_3(FUNC_5(VAR_2, VAR_6,
  FUNC_6(VAR_6) + 1));
 FUNC_3(FUNC_5(VAR_3, VAR_7,
  FUNC_6(VAR_7) + 1));

 return VAR_0;
}
