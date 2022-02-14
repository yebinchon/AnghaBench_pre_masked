
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_vv {int current_hps_source; int current_hps_sync; int hflip; TYPE_1__* standard; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {int v_field; int h_pixels; } ;


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
 int FUNC_0 (struct saa7146_dev*,int ,int,int ,int*,int*,int*,int*) ;
 int FUNC_1 (struct saa7146_dev*,int,int,int*) ;
 int FUNC_2 (struct saa7146_vv*,int*,int*) ;
 int FUNC_3 (struct saa7146_dev*,int,int,int,int*,int*) ;
 int FUNC_4 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct saa7146_dev *VAR_10, int VAR_11, int VAR_12, enum v4l2_field VAR_13)
{
 struct saa7146_vv *VAR_14 = VAR_10->vv_data;

 int VAR_15 = VAR_14->current_hps_source;
 int VAR_16 = VAR_14->current_hps_sync;

 u32 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;


 VAR_17 = 0;
 VAR_18 = 0;
 FUNC_3(VAR_10, VAR_13, VAR_14->standard->v_field*2, VAR_12, &VAR_17, &VAR_18);


 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = 0;
 FUNC_0(VAR_10, VAR_14->standard->h_pixels, VAR_11, VAR_14->hflip, &VAR_19, &VAR_18, &VAR_20, &VAR_21);


 FUNC_2(VAR_14, &VAR_21, &VAR_19);
 FUNC_1(VAR_10, VAR_15, VAR_16, &VAR_19);


 FUNC_4(VAR_10, VAR_4, VAR_17);
 FUNC_4(VAR_10, VAR_3, VAR_18);
 FUNC_4(VAR_10, VAR_0, VAR_19);
 FUNC_4(VAR_10, VAR_1,VAR_20);
 FUNC_4(VAR_10, VAR_2, VAR_21);


 FUNC_4(VAR_10, VAR_9, (VAR_5 | VAR_6 | VAR_7 | VAR_8) );
}
