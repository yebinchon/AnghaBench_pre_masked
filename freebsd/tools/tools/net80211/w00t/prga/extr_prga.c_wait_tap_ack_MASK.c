
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int frag; scalar_t__ state; scalar_t__ data_try; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct params*) ;

void FUNC_2(struct params *VAR_2)
{
 VAR_2->data_try = 0;
 VAR_2->frag = 1;
 FUNC_1(VAR_2);

 if (VAR_2->state == VAR_0) {



  VAR_2->state = VAR_1;
 }
}
