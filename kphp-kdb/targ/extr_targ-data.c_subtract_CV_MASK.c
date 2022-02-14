
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int dummy; } ;


 long VAR_0 ;

__attribute__((used)) static inline int FUNC_0 (struct cyclic_views_entry *VAR_1, struct cyclic_views_entry *VAR_2) {
  long VAR_3 = VAR_2 - VAR_1;
  return VAR_3 >= 0 ? VAR_3 : VAR_3 + VAR_0;
}
