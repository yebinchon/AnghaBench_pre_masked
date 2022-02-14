
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef int CUmodule ;
typedef int CUjit_option ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int *,void const*,int,int *,void**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5 (hashcat_ctx_t *VAR_7, CUmodule *VAR_8, const void *VAR_9)
{


  char *VAR_10 = (char *) FUNC_2 (8192);
  char *VAR_11 = (char *) FUNC_2 (8192);

  CUjit_option VAR_12[6];
  void *VAR_13[6];

  VAR_12[0] = VAR_5;
  VAR_13[0] = (void *) 0;

  VAR_12[1] = VAR_4;
  VAR_13[1] = (void *) 1;

  VAR_12[2] = VAR_2;
  VAR_13[2] = (void *) VAR_10;

  VAR_12[3] = VAR_3;
  VAR_13[3] = (void *) 8192;

  VAR_12[4] = VAR_0;
  VAR_13[4] = (void *) VAR_11;

  VAR_12[5] = VAR_1;
  VAR_13[5] = (void *) 8192;

  const int VAR_14 = FUNC_0 (VAR_7, VAR_8, VAR_9, 6, VAR_12, VAR_13);





  if (VAR_14 == -1)
  {
    FUNC_3 ("cuModuleLoadDataEx() Info Log (%d):\n%s\n\n", (int) FUNC_4 (VAR_10), VAR_10);
    FUNC_3 ("cuModuleLoadDataEx() Error Log (%d):\n%s\n\n", (int) FUNC_4 (VAR_11), VAR_11);
  }


  FUNC_1 (VAR_10);
  FUNC_1 (VAR_11);

  return VAR_14;
}
