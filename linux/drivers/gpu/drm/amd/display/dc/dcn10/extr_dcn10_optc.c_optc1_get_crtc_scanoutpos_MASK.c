
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct crtc_position {int vertical_count; int horizontal_count; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int FUNC_2 (struct timing_generator*,struct crtc_position*) ;

void FUNC_3(
 struct timing_generator *VAR_3,
 uint32_t *VAR_4,
 uint32_t *VAR_5,
 uint32_t *VAR_6,
 uint32_t *VAR_7)
{
 struct optc *VAR_8 = FUNC_0(VAR_3);
 struct crtc_position VAR_9;

 FUNC_1(VAR_2,
   VAR_1, VAR_4,
   VAR_0, VAR_5);

 FUNC_2(VAR_3, &VAR_9);

 *VAR_6 = VAR_9.horizontal_count;
 *VAR_7 = VAR_9.vertical_count;
}
