
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lr; int key_len; int key; } ;
struct opal_session_info {int who; TYPE_1__ opal_key; scalar_t__ sum; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct opal_dev*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*,struct opal_dev*) ;
 int FUNC_2 (int*,int ,int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_6, void *VAR_7)
{
 u8 VAR_8[VAR_3];
 struct opal_session_info *VAR_9 = VAR_7;

 FUNC_2(VAR_8, VAR_4[VAR_2], VAR_3);

 if (VAR_9->who != VAR_1) {
  VAR_8[5] = 0x03;
  if (VAR_9->sum)
   VAR_8[7] = VAR_9->opal_key.lr + 1;
  else
   VAR_8[7] = VAR_9->who;
 }

 if (FUNC_1(VAR_9->opal_key.key, VAR_9->opal_key.key_len,
      VAR_8, VAR_6)) {
  FUNC_3("Error building set password command.\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_6, VAR_5);
}
