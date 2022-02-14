
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl6180_data {int lock; int als_gain_milli; int client; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (struct vl6180_data*,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vl6180_data *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (VAR_5 < 1 || VAR_5 > 40)
  return -VAR_0;

 VAR_9 = (VAR_5 * 1000000 + VAR_6) / 1000;
 if (VAR_9 < 1 || VAR_9 > 40000)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_9, VAR_2,
    FUNC_0(VAR_2));

 FUNC_2(&VAR_4->lock);
 VAR_8 = FUNC_4(VAR_4, 1);
 if (VAR_8 < 0)
  goto fail;

 VAR_8 = FUNC_5(VAR_4->client, VAR_1,
    VAR_3[VAR_7]);

 if (VAR_8 >= 0)
  VAR_4->als_gain_milli = VAR_2[VAR_7];

fail:
 FUNC_4(VAR_4, 0);
 FUNC_3(&VAR_4->lock);
 return VAR_8;
}
