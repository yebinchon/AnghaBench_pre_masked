
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid ;
typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ lr; } ;
struct TYPE_4__ {TYPE_1__ opal_key; } ;
struct opal_user_lr_setup {int range_start; int range_length; int WLE; int RLE; TYPE_2__ session; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*,struct opal_dev*,int) ;
 int FUNC_1 (int*,struct opal_dev*,int ) ;
 int FUNC_2 (scalar_t__*,int,scalar_t__) ;
 int FUNC_3 (struct opal_dev*,scalar_t__*,int ) ;
 int FUNC_4 (struct opal_dev*,scalar_t__*,struct opal_user_lr_setup*) ;
 int FUNC_5 (struct opal_dev*,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct opal_dev *VAR_13, void *VAR_14)
{
 u8 VAR_15[VAR_8];
 struct opal_user_lr_setup *VAR_16 = VAR_14;
 u8 VAR_17;
 int VAR_18;

 VAR_17 = VAR_16->session.opal_key.lr;
 VAR_18 = FUNC_2(VAR_15, sizeof(VAR_15), VAR_17);
 if (VAR_18)
  return VAR_18;

 if (VAR_17 == 0)
  VAR_18 = FUNC_4(VAR_13, VAR_15, VAR_16);
 else {
  VAR_18 = FUNC_3(VAR_13, VAR_15, VAR_11[VAR_5]);

  FUNC_1(&VAR_18, VAR_13, VAR_7);
  FUNC_1(&VAR_18, VAR_13, VAR_9);
  FUNC_1(&VAR_18, VAR_13, VAR_6);

  FUNC_1(&VAR_18, VAR_13, VAR_7);
  FUNC_1(&VAR_18, VAR_13, VAR_3);
  FUNC_0(&VAR_18, VAR_13, VAR_16->range_start);
  FUNC_1(&VAR_18, VAR_13, VAR_1);

  FUNC_1(&VAR_18, VAR_13, VAR_7);
  FUNC_1(&VAR_18, VAR_13, VAR_2);
  FUNC_0(&VAR_18, VAR_13, VAR_16->range_length);
  FUNC_1(&VAR_18, VAR_13, VAR_1);

  FUNC_1(&VAR_18, VAR_13, VAR_7);
  FUNC_1(&VAR_18, VAR_13, VAR_4);
  FUNC_0(&VAR_18, VAR_13, !!VAR_16->RLE);
  FUNC_1(&VAR_18, VAR_13, VAR_1);

  FUNC_1(&VAR_18, VAR_13, VAR_7);
  FUNC_1(&VAR_18, VAR_13, VAR_10);
  FUNC_0(&VAR_18, VAR_13, !!VAR_16->WLE);
  FUNC_1(&VAR_18, VAR_13, VAR_1);

  FUNC_1(&VAR_18, VAR_13, VAR_0);
  FUNC_1(&VAR_18, VAR_13, VAR_1);
 }
 if (VAR_18) {
  FUNC_6("Error building Setup Locking range command.\n");
  return VAR_18;
 }

 return FUNC_5(VAR_13, VAR_12);
}
