
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dce_mem_input {int dummy; } ;
struct TYPE_3__ {int high_part; int low_part; } ;
typedef TYPE_1__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(
 struct dce_mem_input *VAR_2,
 PHYSICAL_ADDRESS_LOC VAR_3)
{

 FUNC_0(VAR_1, 0,
  VAR_1,
  VAR_3.high_part);

 FUNC_0(VAR_0, 0,
  VAR_0,
  VAR_3.low_part >> 8);
}
