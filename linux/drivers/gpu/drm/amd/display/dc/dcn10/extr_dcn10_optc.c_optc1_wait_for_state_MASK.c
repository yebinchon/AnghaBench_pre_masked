
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
typedef enum crtc_state { ____Placeholder_crtc_state } crtc_state ;




 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int,int) ;

void FUNC_2(struct timing_generator *VAR_3,
  enum crtc_state VAR_4)
{
 struct optc *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_0,
    VAR_2, 1,
    1, 100000);
  break;

 case 129:
  FUNC_1(VAR_0,
    VAR_1, 1,
    1, 100000);
  break;

 default:
  break;
 }
}
