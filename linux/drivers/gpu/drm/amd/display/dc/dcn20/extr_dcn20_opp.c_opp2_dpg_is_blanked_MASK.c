
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct output_pixel_processor {int dummy; } ;
struct dcn20_opp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int*,int ,int*) ;
 struct dcn20_opp* FUNC_2 (struct output_pixel_processor*) ;

bool FUNC_3(struct output_pixel_processor *VAR_5)
{
 struct dcn20_opp *VAR_6 = FUNC_2(VAR_5);
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9;

 FUNC_1(VAR_0,
   VAR_2, &VAR_7,
   VAR_3, &VAR_8);

 FUNC_0(VAR_4,
   VAR_1, &VAR_9);

 return (VAR_7 == 1) &&
  (VAR_9 == 0);
}
