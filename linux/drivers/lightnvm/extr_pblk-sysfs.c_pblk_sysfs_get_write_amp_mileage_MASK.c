
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int pad_wa; int gc_wa; int user_wa; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct pblk *VAR_0, char *VAR_1)
{
 return FUNC_1(FUNC_0(&VAR_0->user_wa),
  FUNC_0(&VAR_0->gc_wa), FUNC_0(&VAR_0->pad_wa),
  VAR_1);
}
