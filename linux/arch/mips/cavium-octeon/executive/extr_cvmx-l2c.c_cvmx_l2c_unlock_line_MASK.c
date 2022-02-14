
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int L; scalar_t__ V; } ;
union cvmx_l2c_tag {TYPE_1__ s; } ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 union cvmx_l2c_tag FUNC_5 (int,int) ;

int FUNC_6(uint64_t VAR_4)
{

 if (FUNC_2(VAR_3)) {
  int VAR_5;
  union cvmx_l2c_tag VAR_6;
  uint32_t VAR_7;
  uint32_t VAR_8 = FUNC_3(VAR_4);

  VAR_7 = ((VAR_4 >> VAR_0) & ((1 << VAR_0) - 1));







  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_6 = FUNC_5(VAR_5, VAR_8);

   if (VAR_6.s.V && (VAR_6.s.addr == VAR_7)) {
    FUNC_1(FUNC_0(VAR_2, VAR_4), 0);
    return VAR_6.s.L;
   }
  }
 } else {
  int VAR_9;
  union cvmx_l2c_tag VAR_10;
  uint32_t VAR_11;

  uint32_t VAR_12 = FUNC_3(VAR_4);


  VAR_11 = ((VAR_4 >> VAR_0) & ((1 << VAR_0) - 1));
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_10 = FUNC_5(VAR_9, VAR_12);

   if (VAR_10.s.V && (VAR_10.s.addr == VAR_11)) {
    FUNC_4(VAR_9, VAR_12);
    return VAR_10.s.L;
   }
  }
 }
 return 0;
}
