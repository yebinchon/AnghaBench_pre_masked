
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int samplerate; } ;
struct vc4_hdmi {TYPE_2__ audio; int hsm_clock; TYPE_1__* encoder; } ;
struct vc4_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,unsigned long*,unsigned long*) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct vc4_hdmi *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->encoder->dev;
 struct vc4_dev *VAR_9 = FUNC_4(VAR_8);
 u32 VAR_10 = FUNC_2(VAR_7->hsm_clock);
 unsigned long VAR_11, VAR_12;

 FUNC_3(VAR_10, VAR_7->audio.samplerate,
        VAR_5 >>
        VAR_6,
        (VAR_2 >>
         VAR_3) + 1,
        &VAR_11, &VAR_12);

 FUNC_0(VAR_0,
   FUNC_1(VAR_11, VAR_4) |
   FUNC_1(VAR_12 - 1, VAR_1));
}
