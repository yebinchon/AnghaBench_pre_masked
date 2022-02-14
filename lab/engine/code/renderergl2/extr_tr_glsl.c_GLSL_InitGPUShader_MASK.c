
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpCode ;
typedef int shaderProgram_t ;
typedef scalar_t__ qboolean ;
typedef int fpCode ;
typedef int GLchar ;


 int FUNC_0 (int ,int const*,char*,int) ;
 int FUNC_1 (int *,char const*,int,char*,char*) ;
 int FUNC_2 (char const*,char const*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(shaderProgram_t * VAR_2, const char *VAR_3,
 int VAR_4, qboolean VAR_5, const GLchar *VAR_6, qboolean VAR_7,
 const char *VAR_8, const char *VAR_9)
{
 char VAR_10[32000];
 char VAR_11[32000];
 char *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = sizeof(VAR_10);
 if (VAR_7)
 {
  FUNC_0(VAR_1, VAR_6, VAR_10, VAR_13);
  VAR_12 = &VAR_10[FUNC_3(VAR_10)];
  VAR_13 -= FUNC_3(VAR_10);
 }
 else
 {
  VAR_12 = &VAR_10[0];
 }

 if (!FUNC_2(VAR_3, VAR_8, VAR_1, VAR_12, VAR_13))
 {
  return 0;
 }

 if (VAR_5)
 {
  VAR_13 = sizeof(VAR_11);
  if (VAR_7)
  {
   FUNC_0(VAR_0, VAR_6, VAR_11, VAR_13);
   VAR_12 = &VAR_11[FUNC_3(VAR_11)];
   VAR_13 -= FUNC_3(VAR_11);
  }
  else
  {
   VAR_12 = &VAR_11[0];
  }

  if (!FUNC_2(VAR_3, VAR_9, VAR_0, VAR_12, VAR_13))
  {
   return 0;
  }
 }

 VAR_14 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10, VAR_5 ? VAR_11 : ((void*)0));

 return VAR_14;
}
