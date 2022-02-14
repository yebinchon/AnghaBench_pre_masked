
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl6180_data {int als_it_ms; int lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vl6180_data*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct vl6180_data *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = (VAR_4 + 500) / 1000;
 if (VAR_3 != 0 || VAR_6 < 1 || VAR_6 > 512)
  return -VAR_0;

 FUNC_0(&VAR_2->lock);
 VAR_5 = FUNC_2(VAR_2, 1);
 if (VAR_5 < 0)
  goto fail;

 VAR_5 = FUNC_3(VAR_2->client, VAR_1, VAR_6 - 1);

 if (VAR_5 >= 0)
  VAR_2->als_it_ms = VAR_6;

fail:
 FUNC_2(VAR_2, 0);
 FUNC_1(&VAR_2->lock);

 return VAR_5;
}
