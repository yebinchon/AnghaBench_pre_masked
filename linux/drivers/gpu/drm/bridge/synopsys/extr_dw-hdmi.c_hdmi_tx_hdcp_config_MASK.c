
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ mdataenablepolarity; } ;
struct TYPE_4__ {TYPE_1__ video_mode; } ;
struct dw_hdmi {TYPE_2__ hdmi_data; } ;


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
 int FUNC_0 (struct dw_hdmi*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi *VAR_10)
{
 u8 VAR_11;

 if (VAR_10->hdmi_data.video_mode.mdataenablepolarity)
  VAR_11 = VAR_7;
 else
  VAR_11 = VAR_8;


 FUNC_0(VAR_10, VAR_1,
    VAR_2, VAR_0);

 FUNC_0(VAR_10, VAR_11, VAR_9, VAR_6);

 FUNC_0(VAR_10, VAR_4,
    VAR_5, VAR_3);
}
