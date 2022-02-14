
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {scalar_t__ pad_rst_wa; int pad_wa; scalar_t__ gc_rst_wa; int gc_wa; scalar_t__ user_rst_wa; int user_wa; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct pblk *VAR_0, char *VAR_1)
{
 return FUNC_1(
  FUNC_0(&VAR_0->user_wa) - VAR_0->user_rst_wa,
  FUNC_0(&VAR_0->gc_wa) - VAR_0->gc_rst_wa,
  FUNC_0(&VAR_0->pad_wa) - VAR_0->pad_rst_wa, VAR_1);
}
