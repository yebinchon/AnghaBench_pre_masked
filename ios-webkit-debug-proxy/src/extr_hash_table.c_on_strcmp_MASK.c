
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ht_t ;


 intptr_t FUNC_0 (void const*,void const*) ;

intptr_t FUNC_1(ht_t VAR_0, const void *VAR_1, const void *VAR_2) {
  if (VAR_1 == VAR_2 || !VAR_1 || !VAR_2) {
    return (VAR_1 == VAR_2 ? 0 : VAR_1 ? -1 : 1);
  }
  return FUNC_0(VAR_1, VAR_2);
}
