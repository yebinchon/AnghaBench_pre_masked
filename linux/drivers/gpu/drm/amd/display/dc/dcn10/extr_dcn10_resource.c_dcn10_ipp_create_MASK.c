
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct input_pixel_processor {int dummy; } ;
struct dcn10_ipp {struct input_pixel_processor base; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct dcn10_ipp*,struct dc_context*,size_t,int *,int *,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 struct dcn10_ipp* FUNC_2 (int,int ) ;

__attribute__((used)) static struct input_pixel_processor *FUNC_3(
 struct dc_context *VAR_4, uint32_t VAR_5)
{
 struct dcn10_ipp *VAR_6 =
  FUNC_2(sizeof(struct dcn10_ipp), VAR_0);

 if (!VAR_6) {
  FUNC_0();
  return ((void*)0);
 }

 FUNC_1(VAR_6, VAR_4, VAR_5,
   &VAR_2[VAR_5], &VAR_3, &VAR_1);
 return &VAR_6->base;
}
