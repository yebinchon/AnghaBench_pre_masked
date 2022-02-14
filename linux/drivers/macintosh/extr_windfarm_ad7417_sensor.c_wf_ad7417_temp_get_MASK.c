
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wf_sensor {struct wf_ad7417_priv* priv; } ;
struct wf_ad7417_priv {int lock; int i2c; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct wf_sensor *VAR_0, s32 *VAR_1)
{
 struct wf_ad7417_priv *VAR_2 = VAR_0->priv;
 u8 VAR_3[2];
 s16 VAR_4;
 int VAR_5;

 *VAR_1 = 0;
 FUNC_3(&VAR_2->lock);


 VAR_3[0] = 0;
 VAR_5 = FUNC_2(VAR_2->i2c, VAR_3, 1);
 if (VAR_5 < 0)
  goto error;
 VAR_5 = FUNC_1(VAR_2->i2c, VAR_3, 2);
 if (VAR_5 < 0)
  goto error;


 VAR_4 = FUNC_0((__le16 *)VAR_3);


 *VAR_1 = ((s32)VAR_4) << 8;

 FUNC_4(&VAR_2->lock);
 return 0;

error:
 FUNC_4(&VAR_2->lock);
 return -1;
}
