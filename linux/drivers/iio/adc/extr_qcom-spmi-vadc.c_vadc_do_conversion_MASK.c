
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_priv {int lock; int dev; int complete; scalar_t__ poll_eoc; } ;
struct vadc_channel_prop {int avg_samples; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vadc_priv*,struct vadc_channel_prop*) ;
 int FUNC_6 (struct vadc_priv*,int) ;
 int FUNC_7 (struct vadc_priv*,int *) ;
 int FUNC_8 (struct vadc_priv*,int) ;
 int FUNC_9 (struct vadc_priv*,int ,int ) ;
 int FUNC_10 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct vadc_priv *VAR_4,
         struct vadc_channel_prop *VAR_5, u16 *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->lock);

 VAR_8 = FUNC_5(VAR_4, VAR_5);
 if (VAR_8)
  goto unlock;

 if (!VAR_4->poll_eoc)
  FUNC_4(&VAR_4->complete);

 VAR_8 = FUNC_8(VAR_4, 1);
 if (VAR_8)
  goto unlock;

 VAR_8 = FUNC_9(VAR_4, VAR_1, VAR_2);
 if (VAR_8)
  goto err_disable;

 VAR_7 = FUNC_0(VAR_5->avg_samples) * VAR_3 * 2;

 if (VAR_4->poll_eoc) {
  VAR_8 = FUNC_6(VAR_4, VAR_7);
 } else {
  VAR_8 = FUNC_10(&VAR_4->complete, VAR_7);
  if (!VAR_8) {
   VAR_8 = -VAR_0;
   goto err_disable;
  }


  VAR_8 = FUNC_6(VAR_4, VAR_3);
  if (VAR_8)
   goto err_disable;
 }

 VAR_8 = FUNC_7(VAR_4, VAR_6);

err_disable:
 FUNC_8(VAR_4, 0);
 if (VAR_8)
  FUNC_1(VAR_4->dev, "conversion failed\n");
unlock:
 FUNC_3(&VAR_4->lock);
 return VAR_8;
}
