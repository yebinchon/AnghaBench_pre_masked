
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_hw {scalar_t__ sip; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_0(int VAR_2, void *VAR_3)
{
 struct st_lsm6dsx_hw *VAR_4 = VAR_3;

 return VAR_4->sip > 0 ? VAR_1 : VAR_0;
}
