
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rect {int y; int x; int height; int width; } ;
struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct dcn10_hubp* FUNC_1 (struct hubp*) ;

void FUNC_2(
 struct hubp *VAR_18,
 const struct rect *VAR_19,
 const struct rect *VAR_20)
{
 struct dcn10_hubp *VAR_21 = FUNC_1(VAR_18);

 FUNC_0(VAR_0, 0,
    VAR_8, VAR_19->width,
    VAR_6, VAR_19->height);

 FUNC_0(VAR_2, 0,
    VAR_10, VAR_19->x,
    VAR_12, VAR_19->y);


 FUNC_0(VAR_4, 0,
    VAR_15, VAR_19->width,
    VAR_14, VAR_19->height);

 FUNC_0(VAR_5, 0,
    VAR_16, VAR_19->x,
    VAR_17, VAR_19->y);


 FUNC_0(VAR_1, 0,
    VAR_9, VAR_20->width,
    VAR_7, VAR_20->height);

 FUNC_0(VAR_3, 0,
    VAR_11, VAR_20->x,
    VAR_13, VAR_20->y);
}
