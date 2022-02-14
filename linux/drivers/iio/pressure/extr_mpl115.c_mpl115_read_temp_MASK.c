
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpl115_data {int lock; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mpl115_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mpl115_data *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  goto done;
 VAR_2 = VAR_1->ops->read(VAR_1->dev, VAR_0);
done:
 FUNC_2(&VAR_1->lock);
 return VAR_2;
}
