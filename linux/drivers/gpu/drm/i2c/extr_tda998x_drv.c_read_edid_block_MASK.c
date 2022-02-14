
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda998x_priv {int wq_edid_wait; int edid_mutex; TYPE_1__* hdmi; int wq_edid; } ;
struct TYPE_2__ {int dev; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tda998x_priv*,int ) ;
 int FUNC_6 (struct tda998x_priv*,int ,int*,size_t) ;
 int FUNC_7 (struct tda998x_priv*,int ,int) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(void *VAR_9, u8 *VAR_10, unsigned int VAR_11, size_t VAR_12)
{
 struct tda998x_priv *VAR_13 = VAR_9;
 u8 VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = (VAR_11 & 1) ? 128 : 0;
 VAR_15 = VAR_11 / 2;

 FUNC_3(&VAR_13->edid_mutex);

 FUNC_7(VAR_13, VAR_2, 0xa0);
 FUNC_7(VAR_13, VAR_3, VAR_14);
 FUNC_7(VAR_13, VAR_5, 0x60);
 FUNC_7(VAR_13, VAR_4, VAR_15);


 VAR_13->wq_edid_wait = 1;
 FUNC_7(VAR_13, VAR_6, 0x1);


 FUNC_7(VAR_13, VAR_6, 0x0);


 if (VAR_13->hdmi->irq) {
  VAR_17 = FUNC_8(VAR_13->wq_edid,
     !VAR_13->wq_edid_wait,
     FUNC_1(100));
  if (VAR_17 < 0) {
   FUNC_0(&VAR_13->hdmi->dev, "read edid wait err %d\n", VAR_17);
   VAR_16 = VAR_17;
   goto failed;
  }
 } else {
  for (VAR_17 = 100; VAR_17 > 0; VAR_17--) {
   FUNC_2(1);
   VAR_16 = FUNC_5(VAR_13, VAR_8);
   if (VAR_16 < 0)
    goto failed;
   if (VAR_16 & VAR_1)
    break;
  }
 }

 if (VAR_17 == 0) {
  FUNC_0(&VAR_13->hdmi->dev, "read edid timeout\n");
  VAR_16 = -VAR_0;
  goto failed;
 }

 VAR_16 = FUNC_6(VAR_13, VAR_7, VAR_10, VAR_12);
 if (VAR_16 != VAR_12) {
  FUNC_0(&VAR_13->hdmi->dev, "failed to read edid block %d: %d\n",
   VAR_11, VAR_16);
  goto failed;
 }

 VAR_16 = 0;

 failed:
 FUNC_4(&VAR_13->edid_mutex);
 return VAR_16;
}
