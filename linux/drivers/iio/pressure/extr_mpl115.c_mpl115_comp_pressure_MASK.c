
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mpl115_data {int b1; int c12; int a0; int b2; int lock; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpl115_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mpl115_data *VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 unsigned VAR_11;

 FUNC_1(&VAR_2->lock);
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  goto done;

 VAR_5 = VAR_2->ops->read(VAR_2->dev, VAR_0);
 if (VAR_5 < 0)
  goto done;
 VAR_6 = VAR_5 >> 6;

 VAR_5 = VAR_2->ops->read(VAR_2->dev, VAR_1);
 if (VAR_5 < 0)
  goto done;
 VAR_7 = VAR_5 >> 6;


 VAR_8 = VAR_2->b1 + ((VAR_2->c12 * VAR_7) >> 11);
 VAR_9 = (VAR_2->a0 << 10) + VAR_8 * VAR_6;


 VAR_10 = (VAR_9 + ((VAR_2->b2 * (int) VAR_7) >> 1)) >> 9;

 VAR_11 = VAR_10 * (115 - 50) / 1023 + (50 << 4);
 *VAR_3 = VAR_11 >> 4;
 *VAR_4 = (VAR_11 & 15) * (1000000 >> 4);
done:
 FUNC_2(&VAR_2->lock);
 return VAR_5;
}
