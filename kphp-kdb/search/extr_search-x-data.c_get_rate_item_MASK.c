
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int* rates; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1 (struct item *VAR_1, int VAR_2) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) { return 0;}
  int VAR_3 = FUNC_0 (VAR_1->mask, VAR_2);
  return VAR_3 >= 0 ? VAR_1->rates[VAR_3] : 0;
}
