
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int controller_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4(
 struct timing_generator *VAR_11)
{
 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;

 struct dce110_timing_generator *VAR_14 = FUNC_0(VAR_11);

 switch (VAR_14->controller_id) {
 case 133:
  VAR_12 = VAR_5;
  break;
 case 132:
  VAR_12 = VAR_6;
  break;
 case 131:
  VAR_12 = VAR_7;
  break;
 case 130:
  VAR_12 = VAR_8;
  break;
 case 129:
  VAR_12 = VAR_9;
  break;
 case 128:
  VAR_12 = VAR_10;
  break;
 default:
  break;
 }
 VAR_13 = FUNC_1(VAR_11->ctx, VAR_12);

 FUNC_3(VAR_13, 0, VAR_0, VAR_1);
 FUNC_3(VAR_13, 0, VAR_0, VAR_4);
 FUNC_3(
   VAR_13, 0, VAR_0, VAR_3);
 FUNC_3(VAR_13, 0, VAR_0, VAR_2);

 FUNC_2(VAR_11->ctx, VAR_12, VAR_13);
}
