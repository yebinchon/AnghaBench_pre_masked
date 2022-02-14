
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ti_sn_bridge {int regmap; } ;
struct drm_dp_aux_msg {int request; int size; int address; scalar_t__ buffer; } ;
struct drm_dp_aux {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 struct ti_sn_bridge* FUNC_4 (struct drm_dp_aux*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct drm_dp_aux *VAR_14,
      struct drm_dp_aux_msg *VAR_15)
{
 struct ti_sn_bridge *VAR_16 = FUNC_4(VAR_14);
 u32 VAR_17 = VAR_15->request & ~VAR_4;
 u32 VAR_18 = FUNC_0(VAR_15->request);
 u8 *VAR_19 = (u8 *)VAR_15->buffer;
 unsigned int VAR_20;
 int VAR_21, VAR_22;

 if (VAR_15->size > VAR_13)
  return -VAR_5;

 switch (VAR_17) {
 case 128:
 case 130:
 case 129:
 case 131:
  FUNC_7(VAR_16->regmap, VAR_10, VAR_18);
  break;
 default:
  return -VAR_5;
 }

 FUNC_7(VAR_16->regmap, VAR_8,
       (VAR_15->address >> 16) & 0xF);
 FUNC_7(VAR_16->regmap, VAR_7,
       (VAR_15->address >> 8) & 0xFF);
 FUNC_7(VAR_16->regmap, VAR_9, VAR_15->address & 0xFF);

 FUNC_7(VAR_16->regmap, VAR_12, VAR_15->size);

 if (VAR_17 == 128 || VAR_17 == 130) {
  for (VAR_22 = 0; VAR_22 < VAR_15->size; VAR_22++)
   FUNC_7(VAR_16->regmap, FUNC_2(VAR_22),
         VAR_19[VAR_22]);
 }

 FUNC_7(VAR_16->regmap, VAR_10, VAR_18 | VAR_0);

 VAR_21 = FUNC_6(VAR_16->regmap, VAR_10, VAR_20,
           !(VAR_20 & VAR_0), 200,
           50 * 1000);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_5(VAR_16->regmap, VAR_11, &VAR_20);
 if (VAR_21)
  return VAR_21;
 else if ((VAR_20 & VAR_3)
   || (VAR_20 & VAR_1)
   || (VAR_20 & VAR_2))
  return -VAR_6;

 if (VAR_17 == 128 || VAR_17 == 130)
  return VAR_15->size;

 for (VAR_22 = 0; VAR_22 < VAR_15->size; VAR_22++) {
  unsigned int VAR_23;
  VAR_21 = FUNC_5(VAR_16->regmap, FUNC_1(VAR_22),
      &VAR_23);
  if (VAR_21)
   return VAR_21;

  FUNC_3(VAR_23 & ~0xFF);
  VAR_19[VAR_22] = (u8)(VAR_23 & 0xFF);
 }

 return VAR_15->size;
}
