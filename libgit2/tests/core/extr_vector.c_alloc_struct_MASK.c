
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int content; scalar_t__ count; } ;
typedef TYPE_1__ my_struct ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static my_struct *FUNC_1(int VAR_1)
{
 my_struct *VAR_2 = FUNC_0(sizeof(my_struct));
 VAR_2->content = VAR_1;
 VAR_2->count = 0;
 VAR_0++;
 return VAR_2;
}
