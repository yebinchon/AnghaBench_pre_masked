
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t key_len; scalar_t__ lr; int * key; } ;
struct opal_session_info {scalar_t__ who; scalar_t__ sum; TYPE_1__ opal_key; } ;
struct opal_dev {int dummy; } ;
typedef int lk_ul_user ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*,struct opal_dev*,int *,int) ;
 int FUNC_1 (int*,struct opal_dev*,int ) ;
 int FUNC_2 (int*,struct opal_dev*,int) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (struct opal_dev*,int *,int ) ;
 int FUNC_5 (struct opal_dev*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int * VAR_9 ;
 int ** VAR_10 ;
 int FUNC_7 (char*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_8(struct opal_dev *VAR_12, void *VAR_13)
{
 struct opal_session_info *VAR_14 = VAR_13;
 u8 VAR_15[VAR_8];
 size_t VAR_16 = VAR_14->opal_key.key_len;
 int VAR_17 = 0;

 u8 *VAR_18 = VAR_14->opal_key.key;
 u32 VAR_19 = VAR_0;

 if (VAR_14->sum)
  VAR_17 = FUNC_3(VAR_15, sizeof(VAR_15),
      VAR_14->opal_key.lr);
 else if (VAR_14->who != VAR_1 && !VAR_14->sum)
  VAR_17 = FUNC_3(VAR_15, sizeof(VAR_15),
      VAR_14->who - 1);
 else
  FUNC_6(VAR_15, VAR_10[VAR_2], VAR_8);

 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_4(VAR_12, VAR_10[VAR_5],
   VAR_9[VAR_7]);

 FUNC_1(&VAR_17, VAR_12, VAR_19);
 FUNC_0(&VAR_17, VAR_12, VAR_10[VAR_4],
        VAR_8);
 FUNC_2(&VAR_17, VAR_12, 1);
 FUNC_2(&VAR_17, VAR_12, VAR_6);
 FUNC_2(&VAR_17, VAR_12, 0);
 FUNC_0(&VAR_17, VAR_12, VAR_18, VAR_16);
 FUNC_2(&VAR_17, VAR_12, VAR_3);
 FUNC_2(&VAR_17, VAR_12, VAR_6);
 FUNC_2(&VAR_17, VAR_12, 3);
 FUNC_0(&VAR_17, VAR_12, VAR_15, VAR_8);
 FUNC_2(&VAR_17, VAR_12, VAR_3);

 if (VAR_17) {
  FUNC_7("Error building STARTSESSION command.\n");
  return VAR_17;
 }

 return FUNC_5(VAR_12, VAR_11);
}
