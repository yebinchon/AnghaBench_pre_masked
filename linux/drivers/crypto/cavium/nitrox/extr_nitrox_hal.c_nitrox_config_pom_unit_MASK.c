
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int illegal_dport; } ;
union pom_int_ena_w1s {scalar_t__ value; TYPE_1__ s; } ;
struct TYPE_4__ {int se_cores; } ;
struct nitrox_device {TYPE_2__ hw; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nitrox_device*,int ,scalar_t__) ;

void FUNC_2(struct nitrox_device *VAR_2)
{
 union pom_int_ena_w1s VAR_3;
 int VAR_4;


 VAR_3.value = 0;
 VAR_3.s.illegal_dport = 1;
 FUNC_1(VAR_2, VAR_0, VAR_3.value);


 for (VAR_4 = 0; VAR_4 < VAR_2->hw.se_cores; VAR_4++)
  FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_4));
}
