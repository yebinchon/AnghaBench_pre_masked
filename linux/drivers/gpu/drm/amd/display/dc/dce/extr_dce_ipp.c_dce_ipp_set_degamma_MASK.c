
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct input_pixel_processor {int dummy; } ;
struct dce_ipp {int dummy; } ;
typedef enum ipp_degamma_mode { ____Placeholder_ipp_degamma_mode } ipp_degamma_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int ,int) ;
 struct dce_ipp* FUNC_2 (struct input_pixel_processor*) ;

__attribute__((used)) static void FUNC_3(
 struct input_pixel_processor *VAR_6,
 enum ipp_degamma_mode VAR_7)
{
 struct dce_ipp *VAR_8 = FUNC_2(VAR_6);
 uint32_t VAR_9 = (VAR_7 == VAR_5) ? 1 : 0;

 FUNC_0(VAR_7 == VAR_4 || VAR_7 == VAR_5);

 FUNC_1(VAR_2, 0,
    VAR_3, VAR_9,
    VAR_1, VAR_9,
    VAR_0, VAR_9);
}
