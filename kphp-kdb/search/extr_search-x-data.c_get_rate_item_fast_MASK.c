
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int* rates; int mask; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1 (struct item *VAR_0, int VAR_1) {
  int VAR_2 = FUNC_0 (VAR_0->mask, VAR_1);
  return VAR_2 >= 0 ? VAR_0->rates[VAR_2] : 0;
}
