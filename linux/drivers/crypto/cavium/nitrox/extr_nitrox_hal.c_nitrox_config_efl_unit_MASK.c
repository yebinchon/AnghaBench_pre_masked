
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len_ovr; int d_left; int epci_decode_err; } ;
union efl_core_int_ena_w1s {unsigned long long value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct nitrox_device*,int ,unsigned long long) ;

void FUNC_4(struct nitrox_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  union efl_core_int_ena_w1s VAR_3;
  u64 VAR_4;


  VAR_4 = FUNC_0(VAR_2);
  VAR_3.value = 0;
  VAR_3.s.len_ovr = 1;
  VAR_3.s.d_left = 1;
  VAR_3.s.epci_decode_err = 1;
  FUNC_3(VAR_1, VAR_4, VAR_3.value);

  VAR_4 = FUNC_1(VAR_2);
  FUNC_3(VAR_1, VAR_4, (~0ULL));
  VAR_4 = FUNC_2(VAR_2);
  FUNC_3(VAR_1, VAR_4, (~0ULL));
 }
}
