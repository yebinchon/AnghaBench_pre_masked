
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef int DAC_ENCODER_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_3,
 bool VAR_4,
 uint32_t VAR_5,
 uint8_t VAR_6)
{
 enum bp_result VAR_7 = VAR_0;
 DAC_ENCODER_CONTROL_PS_ALLOCATION VAR_8;

 FUNC_1(
  &VAR_8,
  VAR_4,
  VAR_5,
  VAR_6);

 if (FUNC_0(VAR_2, VAR_8))
  VAR_7 = VAR_1;

 return VAR_7;
}
