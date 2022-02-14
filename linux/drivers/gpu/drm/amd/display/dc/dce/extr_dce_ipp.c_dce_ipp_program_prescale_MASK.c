
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipp_prescale_params {scalar_t__ mode; int bias; int scale; } ;
struct input_pixel_processor {int dummy; } ;
struct dce_ipp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct dce_ipp* FUNC_2 (struct input_pixel_processor*) ;

__attribute__((used)) static void FUNC_3(struct input_pixel_processor *VAR_14,
         struct ipp_prescale_params *VAR_15)
{
 struct dce_ipp *VAR_16 = FUNC_2(VAR_14);


 FUNC_1(VAR_10,
     VAR_4, 1);

 FUNC_0(VAR_13, 0,
    VAR_7, VAR_15->scale,
    VAR_3, VAR_15->bias);

 FUNC_0(VAR_12, 0,
    VAR_6, VAR_15->scale,
    VAR_2, VAR_15->bias);

 FUNC_0(VAR_11, 0,
    VAR_5, VAR_15->scale,
    VAR_1, VAR_15->bias);

 if (VAR_15->mode != VAR_9) {
  FUNC_1(VAR_10,
      VAR_4, 0);


  FUNC_1(VAR_8,
      VAR_0, 1);
 }
}
