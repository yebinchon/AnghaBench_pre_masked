
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_i2c_hw {int reference_frequency; TYPE_1__* masks; } ;
struct TYPE_2__ {scalar_t__ DC_I2C_DDC1_START_STOP_TIMING_CNTL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ,int,int ,int,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(
 struct dce_i2c_hw *VAR_5,
 uint32_t VAR_6)
{

 if (VAR_6) {
  if (VAR_5->masks->DC_I2C_DDC1_START_STOP_TIMING_CNTL)
   FUNC_1(VAR_4, 3,
         FUNC_0(VAR_1, VAR_0), VAR_5->reference_frequency / VAR_6,
         FUNC_0(VAR_1, VAR_3), 2,
         FUNC_0(VAR_1, VAR_2), VAR_6 > 50 ? 2:1);
  else
   FUNC_1(VAR_4, 2,
         FUNC_0(VAR_1, VAR_0), VAR_5->reference_frequency / VAR_6,
         FUNC_0(VAR_1, VAR_3), 2);
 }
}
