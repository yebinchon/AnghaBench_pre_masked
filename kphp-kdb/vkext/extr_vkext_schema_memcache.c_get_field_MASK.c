
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** zval ;


 int FUNC_0 (int ****** (*) (int *****,char const*,int)) ;
 int FUNC_1 (int ****** (*) (int *****,char const*,int)) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ****** (*) (int *****,char const*,int)) ;
 int FUNC_3 (int *****) ;
 scalar_t__ FUNC_4 (int *****) ;
 int FUNC_5 (int ******) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int ,char*,scalar_t__,void**) ;
 scalar_t__ FUNC_8 (int ,int,void*) ;

zval **FUNC_9 (zval *VAR_2, const char *VAR_3, int VAR_4) {
  FUNC_0 (FUNC_9);
  FUNC_2 (FUNC_9);
  FUNC_5 (&VAR_2);

  if (FUNC_4 (VAR_2) != VAR_1) {

    FUNC_1 (FUNC_9);
    return 0;
  }



  zval **VAR_5 = 0;
  if (VAR_3 && FUNC_6 (VAR_3) && FUNC_7 (FUNC_3 (VAR_2), (char *) VAR_3, FUNC_6 (VAR_3) + 1, (void **)&VAR_5) != VAR_0) {
    FUNC_5 (VAR_5);
    FUNC_1 (FUNC_9);
    return VAR_5;
  }
  if (FUNC_8 (FUNC_3 (VAR_2), VAR_4, (void *)&VAR_5) != VAR_0) {
    FUNC_5 (VAR_5);
    FUNC_1 (FUNC_9);
    return VAR_5;
  }
  FUNC_1 (FUNC_9);
  return 0;
}
