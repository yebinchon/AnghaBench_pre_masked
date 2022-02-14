
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speller {long double** stat; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0 (const void *VAR_1, const void *VAR_2) {
  const struct speller **VAR_3 = (const struct speller **) VAR_1, **VAR_4 = (const struct speller **) VAR_2;
  long double VAR_5 = (*VAR_3)->stat[VAR_0][0];
  VAR_5 *= (*VAR_4)->stat[VAR_0][1];
  long double VAR_6 = (*VAR_4)->stat[VAR_0][0];
  VAR_6 *= (*VAR_3)->stat[VAR_0][1];
  if (VAR_5 > VAR_6) {
    return -1;
  }
  if (VAR_5 < VAR_6) {
    return 1;
  }
  return 0;
}
