
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int mut; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ucma_file *VAR_0, struct ucma_file *VAR_1)
{
 if (VAR_0 < VAR_1) {
  FUNC_0(&VAR_1->mut);
  FUNC_0(&VAR_0->mut);
 } else {
  FUNC_0(&VAR_0->mut);
  FUNC_0(&VAR_1->mut);
 }
}
