
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i3c_master {int free_pos; scalar_t__ maxdevs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dw_i3c_master *VAR_1)
{
 if (!(VAR_1->free_pos & FUNC_0(VAR_1->maxdevs - 1, 0)))
  return -VAR_0;

 return FUNC_1(VAR_1->free_pos) - 1;
}
