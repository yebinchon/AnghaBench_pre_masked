
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct moxtet_device {scalar_t__ idx; struct moxtet* moxtet; } ;
struct moxtet {scalar_t__ count; int lock; int * tx; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,size_t) ;
 struct moxtet_device* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct device *VAR_1, u8 VAR_2)
{
 struct moxtet_device *VAR_3 = FUNC_3(VAR_1);
 struct moxtet *VAR_4 = VAR_3->moxtet;
 int VAR_5;

 if (VAR_3->idx >= VAR_4->count)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);

 VAR_4->tx[VAR_4->count - VAR_3->idx] = VAR_2;

 VAR_5 = FUNC_2(FUNC_4(VAR_4->dev), VAR_4->tx,
   VAR_4->count + 1);

 FUNC_1(&VAR_4->lock);

 return VAR_5;
}
