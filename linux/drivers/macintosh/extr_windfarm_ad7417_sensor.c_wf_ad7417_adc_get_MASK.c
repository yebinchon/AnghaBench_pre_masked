
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wf_sensor {int name; struct wf_ad7417_priv* priv; } ;
struct wf_ad7417_priv {int config; int lock; TYPE_1__* i2c; struct wf_sensor* sensors; } ;
typedef int s32 ;
typedef int __le16 ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct wf_ad7417_priv*,int,int,int *) ;

__attribute__((used)) static int FUNC_9(struct wf_sensor *VAR_0, s32 *VAR_1)
{
 struct wf_ad7417_priv *VAR_2 = VAR_0->priv;
 int VAR_3 = VAR_0 - VAR_2->sensors;
 int VAR_4, VAR_5;
 u8 VAR_6[2];
 u16 VAR_7;

 *VAR_1 = 0;
 FUNC_6(&VAR_2->lock);
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {

  VAR_6[0] = 1;
  VAR_6[1] = (VAR_2->config & 0x1f) | (VAR_3 << 5);
  VAR_5 = FUNC_4(VAR_2->i2c, VAR_6, 2);
  if (VAR_5 < 0)
   goto error;


  FUNC_5(1);


  VAR_6[0] = 4;
  VAR_5 = FUNC_4(VAR_2->i2c, VAR_6, 1);
  if (VAR_5 < 0)
   goto error;


  VAR_5 = FUNC_3(VAR_2->i2c, VAR_6, 2);
  if (VAR_5 < 0)
   goto error;


  VAR_7 = FUNC_0((__le16 *)VAR_6) >> 6;
  FUNC_8(VAR_2, VAR_3, VAR_7, VAR_1);

  FUNC_2(&VAR_2->i2c->dev, "ADC chan %d [%s]"
    " raw value: 0x%x, conv to: 0x%08x\n",
    VAR_3, VAR_0->name, VAR_7, *VAR_1);

  FUNC_7(&VAR_2->lock);
  return 0;

 error:
  FUNC_1(&VAR_2->i2c->dev,
     "Error reading ADC, try %d...\n", VAR_4);
  if (VAR_4 < 9)
   FUNC_5(10);
 }
 FUNC_7(&VAR_2->lock);
 return -1;
}
