
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extra_reg {scalar_t__ idx; int event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct extra_reg *VAR_2)
{
 if (VAR_2->idx < VAR_0)
  return VAR_2->idx;
 return VAR_2->idx + (VAR_2->event >> VAR_1) - 0xd;
}
