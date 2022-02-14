
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct crtc_trigger_info {int event; int delay; } ;




 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int ,int,int ,int) ;



void FUNC_3(
  struct timing_generator *VAR_9,
  int VAR_10,
  struct crtc_trigger_info *VAR_11)
{
 struct optc *VAR_12 = FUNC_0(VAR_9);
 uint32_t VAR_13 = 0;
 uint32_t VAR_14 = 0;

 switch (VAR_11->event) {

 case 130:
  VAR_14 = 1;
  break;

 case 131:
  VAR_13 = 1;
  break;
 }

 FUNC_2(VAR_3, 0,



    VAR_7, 20,
    VAR_6, VAR_10,

    VAR_5, VAR_14,
    VAR_4, VAR_13);

 switch (VAR_11->delay) {
 case 129:
  FUNC_1(VAR_8, 0,
    VAR_0, 1);
  break;
 case 128:
  FUNC_1(VAR_1, 0,



   VAR_2, 2);
  break;
 }
}
