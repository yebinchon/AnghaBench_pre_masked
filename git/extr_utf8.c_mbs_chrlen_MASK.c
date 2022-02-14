
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const**,size_t*) ;

int FUNC_2(const char **VAR_1, size_t *VAR_2, const char *VAR_3)
{
 int VAR_4;
 const char *VAR_5 = *VAR_1;
 size_t VAR_6 = (VAR_2 ? *VAR_2 : VAR_0);

 if (VAR_6 < 1)
  return 0;

 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_5, &VAR_6);

  VAR_4 = VAR_5 ? (VAR_5 - *VAR_1)
      : 1 ;
 }
 else {




  VAR_4 = 1;
 }

 *VAR_1 += VAR_4;
 if (VAR_2)
  *VAR_2 -= VAR_4;

 return VAR_4;
}
