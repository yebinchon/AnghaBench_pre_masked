
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int lr; } ;
struct TYPE_4__ {int who; TYPE_1__ opal_key; } ;
struct opal_lock_unlock {scalar_t__ l_state; TYPE_2__ session; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*,struct opal_dev*,int *,int) ;
 int FUNC_1 (int*,struct opal_dev*,int) ;
 int FUNC_2 (struct opal_dev*,int *,int ) ;
 int FUNC_3 (struct opal_dev*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int * VAR_13 ;
 int ** VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_16, void *VAR_17)
{
 u8 VAR_18[VAR_10];
 u8 VAR_19[VAR_10];
 struct opal_lock_unlock *VAR_20 = VAR_17;
 int VAR_21;

 FUNC_4(VAR_18, VAR_14[VAR_4],
        VAR_10);

 if (VAR_20->l_state == VAR_6)
  FUNC_4(VAR_18, VAR_14[VAR_5],
         VAR_10);

 VAR_18[7] = VAR_20->session.opal_key.lr;

 FUNC_4(VAR_19, VAR_14[VAR_11], VAR_10);

 VAR_19[7] = VAR_20->session.who;

 VAR_21 = FUNC_2(VAR_16, VAR_18, VAR_13[VAR_7]);

 FUNC_1(&VAR_21, VAR_16, VAR_9);
 FUNC_1(&VAR_21, VAR_16, VAR_12);

 FUNC_1(&VAR_21, VAR_16, VAR_8);
 FUNC_1(&VAR_21, VAR_16, VAR_9);
 FUNC_1(&VAR_21, VAR_16, 3);

 FUNC_1(&VAR_21, VAR_16, VAR_8);


 FUNC_1(&VAR_21, VAR_16, VAR_9);
 FUNC_0(&VAR_21, VAR_16,
        VAR_14[VAR_2],
        VAR_10/2);
 FUNC_0(&VAR_21, VAR_16, VAR_19, VAR_10);
 FUNC_1(&VAR_21, VAR_16, VAR_1);


 FUNC_1(&VAR_21, VAR_16, VAR_9);
 FUNC_0(&VAR_21, VAR_16,
        VAR_14[VAR_2],
        VAR_10/2);
 FUNC_0(&VAR_21, VAR_16, VAR_19, VAR_10);
 FUNC_1(&VAR_21, VAR_16, VAR_1);


 FUNC_1(&VAR_21, VAR_16, VAR_9);
 FUNC_0(&VAR_21, VAR_16, VAR_14[VAR_3],
        VAR_10/2);
 FUNC_1(&VAR_21, VAR_16, 1);
 FUNC_1(&VAR_21, VAR_16, VAR_1);


 FUNC_1(&VAR_21, VAR_16, VAR_0);
 FUNC_1(&VAR_21, VAR_16, VAR_1);
 FUNC_1(&VAR_21, VAR_16, VAR_0);
 FUNC_1(&VAR_21, VAR_16, VAR_1);

 if (VAR_21) {
  FUNC_5("Error building add user to locking range command.\n");
  return VAR_21;
 }

 return FUNC_3(VAR_16, VAR_15);
}
