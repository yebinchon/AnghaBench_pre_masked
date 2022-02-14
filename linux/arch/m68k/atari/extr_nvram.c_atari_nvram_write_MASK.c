
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

ssize_t FUNC_5(char *VAR_3, size_t VAR_4, loff_t *VAR_5)
{
 char *VAR_6 = VAR_3;
 loff_t VAR_7;

 FUNC_3(&VAR_2);
 if (!FUNC_0()) {
  FUNC_4(&VAR_2);
  return -VAR_0;
 }
 for (VAR_7 = *VAR_5; VAR_4 > 0 && VAR_7 < VAR_1; --VAR_4, ++VAR_7, ++VAR_6)
  FUNC_2(*VAR_6, VAR_7);
 FUNC_1();
 FUNC_4(&VAR_2);

 *VAR_5 = VAR_7;
 return VAR_6 - VAR_3;
}
