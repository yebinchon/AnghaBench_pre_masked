
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct crtc_position {int nominal_vcount; int vertical_count; int horizontal_count; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int *) ;

void FUNC_3(struct timing_generator *VAR_5,
  struct crtc_position *VAR_6)
{
 struct optc *VAR_7 = FUNC_0(VAR_5);

 FUNC_2(VAR_2,
   VAR_0, &VAR_6->horizontal_count,
   VAR_3, &VAR_6->vertical_count);

 FUNC_1(VAR_1,
   VAR_4, &VAR_6->nominal_vcount);
}
