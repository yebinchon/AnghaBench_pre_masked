
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lv0104cs_private {int calibscale; int lock; int client; } ;
struct TYPE_3__ {int val; int val2; int regval; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct lv0104cs_private *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3 * 1000000 + VAR_4;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1) - 1; VAR_10++) {
  VAR_6 = VAR_1[VAR_10].val * 1000000
    + VAR_1[VAR_10].val2;
  VAR_7 = VAR_1[VAR_10 + 1].val * 1000000
    + VAR_1[VAR_10 + 1].val2;
  VAR_8 = (VAR_6 + VAR_7) / 2;


  if (VAR_5 >= VAR_6 && VAR_5 < VAR_8) {
   VAR_11 = VAR_10;
   break;
  }


  if (VAR_5 >= VAR_8 && VAR_5 <= VAR_7) {
   VAR_11 = VAR_10 + 1;
   break;
  }
 }

 if (VAR_10 == FUNC_0(VAR_1) - 1)
  return -VAR_0;

 FUNC_2(&VAR_2->lock);


 VAR_9 = FUNC_1(VAR_2->client,
   VAR_1[VAR_11].regval);
 if (VAR_9)
  goto err_mutex;

 VAR_2->calibscale = VAR_11;

err_mutex:
 FUNC_3(&VAR_2->lock);

 return VAR_9;
}
