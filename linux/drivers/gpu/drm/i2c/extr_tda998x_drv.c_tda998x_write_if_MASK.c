
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
union hdmi_infoframe {TYPE_2__ any; } ;
typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {TYPE_1__* hdmi; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (union hdmi_infoframe*,int *,int) ;
 int FUNC_2 (struct tda998x_priv*,int ,int ) ;
 int FUNC_3 (struct tda998x_priv*,int ,int ) ;
 int FUNC_4 (struct tda998x_priv*,int ,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct tda998x_priv *VAR_2, u8 VAR_3, u16 VAR_4,
   union hdmi_infoframe *VAR_5)
{
 u8 VAR_6[VAR_0];
 ssize_t VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0) {
  FUNC_0(&VAR_2->hdmi->dev,
   "hdmi_infoframe_pack() type=0x%02x failed: %zd\n",
   VAR_5->any.type, VAR_7);
  return;
 }

 FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_4(VAR_2, VAR_4, VAR_6, VAR_7);
 FUNC_3(VAR_2, VAR_1, VAR_3);
}
