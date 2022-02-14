
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int lr; } ;
struct TYPE_4__ {TYPE_1__ opal_key; } ;
struct opal_lock_unlock {int l_state; TYPE_2__ session; } ;
struct opal_dev {int dummy; } ;
typedef int lr_buffer ;


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
 scalar_t__ FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct opal_dev*,int*,int ) ;
 int FUNC_3 (struct opal_dev*,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_13, void *VAR_14)
{
 u8 VAR_15[VAR_8];
 struct opal_lock_unlock *VAR_16 = VAR_14;
 u8 VAR_17 = 1, VAR_18 = 1;
 int VAR_19 = 0;

 if (FUNC_1(VAR_15, sizeof(VAR_15),
    VAR_16->session.opal_key.lr) < 0)
  return -VAR_0;

 switch (VAR_16->l_state) {
 case 129:
  VAR_17 = 0;
  VAR_18 = 1;
  break;
 case 128:
  VAR_17 = 0;
  VAR_18 = 0;
  break;
 case 130:

  break;
 default:
  FUNC_4("Tried to set an invalid locking state... returning to uland\n");
  return VAR_3;
 }

 VAR_19 = FUNC_2(VAR_13, VAR_15, VAR_11[VAR_5]);

 FUNC_0(&VAR_19, VAR_13, VAR_7);
 FUNC_0(&VAR_19, VAR_13, VAR_9);
 FUNC_0(&VAR_19, VAR_13, VAR_6);

 FUNC_0(&VAR_19, VAR_13, VAR_7);
 FUNC_0(&VAR_19, VAR_13, VAR_4);
 FUNC_0(&VAR_19, VAR_13, VAR_17);
 FUNC_0(&VAR_19, VAR_13, VAR_2);

 FUNC_0(&VAR_19, VAR_13, VAR_7);
 FUNC_0(&VAR_19, VAR_13, VAR_10);
 FUNC_0(&VAR_19, VAR_13, VAR_18);
 FUNC_0(&VAR_19, VAR_13, VAR_2);

 FUNC_0(&VAR_19, VAR_13, VAR_1);
 FUNC_0(&VAR_19, VAR_13, VAR_2);

 if (VAR_19) {
  FUNC_4("Error building SET command.\n");
  return VAR_19;
 }

 return FUNC_3(VAR_13, VAR_12);
}
