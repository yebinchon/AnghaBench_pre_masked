
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid ;
typedef int u8 ;
struct TYPE_2__ {int lr; } ;
struct opal_session_info {TYPE_1__ opal_key; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct opal_dev*,int *,int ) ;
 int FUNC_2 (struct opal_dev*,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_5, void *VAR_6)
{
 struct opal_session_info *VAR_7 = VAR_6;
 u8 VAR_8[VAR_2];
 int VAR_9;

 if (FUNC_0(VAR_8, sizeof(VAR_8), VAR_7->opal_key.lr) < 0)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5, VAR_8, VAR_3[VAR_1]);

 if (VAR_9) {
  FUNC_3("Error building Erase Locking Range Command.\n");
  return VAR_9;
 }

 return FUNC_2(VAR_5, VAR_4);
}
