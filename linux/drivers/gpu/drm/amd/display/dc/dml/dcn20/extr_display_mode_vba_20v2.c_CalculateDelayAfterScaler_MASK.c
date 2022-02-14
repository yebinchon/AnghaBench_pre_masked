
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double ReturnBW; void* LastPixelOfLineExtraWatermark; } ;
struct display_mode_lib {TYPE_1__ vba; } ;
typedef enum output_format_class { ____Placeholder_output_format_class } output_format_class ;


 int VAR_0 ;
 unsigned int FUNC_0 (double,int) ;
 double FUNC_1 (double,int) ;
 void* FUNC_2 (void*,double) ;

__attribute__((used)) static bool FUNC_3(
  struct display_mode_lib *VAR_1,
  double VAR_2,
  double VAR_3,
  double VAR_4,
  double VAR_5,
  double VAR_6,
  double VAR_7,
  double VAR_8,
  double VAR_9,
  double VAR_10,
  unsigned int VAR_11,
  unsigned int VAR_12,
  bool VAR_13,
  unsigned int VAR_14,
  double VAR_15,
  double VAR_16,
  double VAR_17,
  double VAR_18,
  double VAR_19,
  double VAR_20,
  unsigned int VAR_21,
  enum output_format_class VAR_22,
  unsigned int VAR_23,
  unsigned int VAR_24,
  double VAR_25,
  double VAR_26,
  unsigned int VAR_27,
  unsigned int VAR_28,
  bool VAR_29,
  bool VAR_30,
  double *VAR_31,
  double *VAR_32
  )
{
 unsigned int VAR_33, VAR_34;
 double VAR_35;
 double VAR_36;
 double VAR_37;

 VAR_35 = VAR_24 * VAR_27 * FUNC_0(VAR_25, 1) / (VAR_1->vba.ReturnBW * VAR_3 / VAR_5);
 VAR_1->vba.LastPixelOfLineExtraWatermark = FUNC_2(VAR_1->vba.LastPixelOfLineExtraWatermark, VAR_35 - VAR_6);

 if (VAR_26 != 0) {
  VAR_36 = VAR_24 / 2 * VAR_28 * FUNC_0(VAR_26, 2) / (VAR_1->vba.ReturnBW * VAR_4 / VAR_5);
  VAR_1->vba.LastPixelOfLineExtraWatermark = FUNC_2(VAR_1->vba.LastPixelOfLineExtraWatermark, VAR_36 - VAR_7);
 }

 if (VAR_13)
  VAR_33 = VAR_15 + VAR_16;
 else
  VAR_33 = VAR_15 + VAR_17;

 VAR_33 = VAR_33 + VAR_18 + VAR_14 * VAR_19;

 VAR_34 = VAR_20;

 if (VAR_8 == 0.0 || VAR_9 == 0.0)
  return 1;

 *VAR_31 = VAR_33 * VAR_10 / VAR_8 + VAR_34 * VAR_10 / VAR_9
   + VAR_11;

 if (VAR_12 > 1)
  *VAR_31 = *VAR_31 + VAR_21;

 if (VAR_22 == VAR_0 || (VAR_29 && VAR_30))
  *VAR_32 = 1;
 else
  *VAR_32 = 0;

 VAR_37 = ((double) (*VAR_32 * VAR_23)) + *VAR_31;
 *VAR_32 = FUNC_1(VAR_37 / VAR_23, 1);
 *VAR_31 = VAR_37 - ((double) (*VAR_32 * VAR_23));

 return 1;
}
