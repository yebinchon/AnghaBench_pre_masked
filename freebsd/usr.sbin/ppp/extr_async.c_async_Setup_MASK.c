
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async {int my_accmap; int his_accmap; scalar_t__ length; int mode; } ;


 int VAR_0 ;

void
FUNC_0(struct async *VAR_1)
{
  VAR_1->mode = VAR_0;
  VAR_1->length = 0;
  VAR_1->my_accmap = VAR_1->his_accmap = 0xffffffff;
}
