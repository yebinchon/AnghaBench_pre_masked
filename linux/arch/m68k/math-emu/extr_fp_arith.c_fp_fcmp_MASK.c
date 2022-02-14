
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fp_ext {int sign; } ;
struct TYPE_2__ {struct fp_ext* temp; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct fp_ext* FUNC_1 (struct fp_ext*,struct fp_ext*) ;

struct fp_ext *
FUNC_2(struct fp_ext *VAR_2, struct fp_ext *VAR_3)
{
 FUNC_0(VAR_1, "fcmp ");

 VAR_0->temp[1] = *VAR_2;
 VAR_3->sign = !VAR_3->sign;
 return FUNC_1(&VAR_0->temp[1], VAR_3);
}
