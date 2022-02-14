
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_clocktype_t ;
typedef int uint64_t ;
struct TYPE_4__ {int tb_low; scalar_t__ tb_high; } ;
typedef TYPE_1__ timebasestruct_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

uint64_t FUNC_2(uv_clocktype_t VAR_1) {
  uint64_t VAR_2 = 1000000000;
  timebasestruct_t VAR_3;
  FUNC_0(&VAR_3, VAR_0);
  FUNC_1(&VAR_3, VAR_0);
  return (uint64_t) VAR_3.tb_high * VAR_2 + VAR_3.tb_low;
}
