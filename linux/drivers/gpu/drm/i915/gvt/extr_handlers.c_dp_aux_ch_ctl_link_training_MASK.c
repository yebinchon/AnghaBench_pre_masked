
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_vgpu_dpcd_data {int * data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(struct intel_vgpu_dpcd_data *VAR_13,
  u8 VAR_14)
{
 if ((VAR_14 & VAR_12) == VAR_10) {


  VAR_13->data[VAR_1] |= VAR_3;

  VAR_13->data[VAR_2] |= VAR_3;
 } else if ((VAR_14 & VAR_12) ==
   VAR_11) {


  VAR_13->data[VAR_1] |= VAR_4;
  VAR_13->data[VAR_1] |= VAR_9;

  VAR_13->data[VAR_2] |= VAR_4;
  VAR_13->data[VAR_2] |= VAR_9;

  VAR_13->data[VAR_5] |=
   VAR_0;
 } else if ((VAR_14 & VAR_12) ==
   VAR_6) {


  VAR_13->data[VAR_8] = VAR_7;
 }
}
