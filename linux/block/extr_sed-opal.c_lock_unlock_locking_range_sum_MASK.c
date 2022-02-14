
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
struct opal_dev {int comid; } ;
typedef int lr_buffer ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,int,int ) ;
 int FUNC_1 (struct opal_dev*) ;
 int FUNC_2 (struct opal_dev*,int ) ;
 int FUNC_3 (struct opal_dev*,int*,int,int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct opal_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_4, void *VAR_5)
{
 u8 VAR_6[VAR_2];
 u8 VAR_7 = 1, VAR_8 = 1;
 struct opal_lock_unlock *VAR_9 = VAR_5;
 int VAR_10;

 FUNC_1(VAR_4);
 FUNC_5(VAR_4, VAR_4->comid);

 if (FUNC_0(VAR_6, sizeof(VAR_6),
    VAR_9->session.opal_key.lr) < 0)
  return -VAR_0;

 switch (VAR_9->l_state) {
 case 129:
  VAR_7 = 0;
  VAR_8 = 1;
  break;
 case 128:
  VAR_7 = 0;
  VAR_8 = 0;
  break;
 case 130:

  break;
 default:
  FUNC_4("Tried to set an invalid locking state.\n");
  return VAR_1;
 }
 VAR_10 = FUNC_3(VAR_4, VAR_6, 1, 1,
     VAR_7, VAR_8);

 if (VAR_10 < 0) {
  FUNC_4("Error building SET command.\n");
  return VAR_10;
 }

 return FUNC_2(VAR_4, VAR_3);
}
