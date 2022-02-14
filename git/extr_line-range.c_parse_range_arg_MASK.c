
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
typedef int nth_line_fn_t ;


 int FUNC_0 (long,long) ;
 char* FUNC_1 (char const*,int ,void*,long,long,long*) ;
 char* FUNC_2 (char const*,int ,void*,long,long,long*,long*,char const*,struct index_state*) ;

int FUNC_3(const char *VAR_0, nth_line_fn_t VAR_1,
      void *VAR_2, long VAR_3, long VAR_4,
      long *VAR_5, long *VAR_6,
      const char *VAR_7, struct index_state *VAR_8)
{
 *VAR_5 = *VAR_6 = 0;

 if (VAR_4 < 1)
  VAR_4 = 1;
 if (VAR_4 > VAR_3)
  VAR_4 = VAR_3 + 1;

 if (*VAR_0 == ':' || (*VAR_0 == '^' && *(VAR_0 + 1) == ':')) {
  VAR_0 = FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8);
  if (!VAR_0 || *VAR_0)
   return -1;
  return 0;
 }

 VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, -VAR_4, VAR_5);

 if (*VAR_0 == ',')
  VAR_0 = FUNC_1(VAR_0 + 1, VAR_1, VAR_2, VAR_3, *VAR_5 + 1, VAR_6);

 if (*VAR_0)
  return -1;

 if (*VAR_5 && *VAR_6 && *VAR_6 < *VAR_5) {
  FUNC_0(*VAR_6, *VAR_5);
 }

 return 0;
}
