
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_session_info {int who; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*,struct opal_dev*,int) ;
 int FUNC_1 (struct opal_dev*,int *,int ) ;
 int FUNC_2 (struct opal_dev*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_12, void *VAR_13)
{
 struct opal_session_info *VAR_14 = VAR_13;
 u8 VAR_15[VAR_6];
 int VAR_16;

 FUNC_3(VAR_15, VAR_10[VAR_7], VAR_6);
 VAR_15[7] = VAR_14->who;

 VAR_16 = FUNC_1(VAR_12, VAR_15, VAR_9[VAR_2]);
 FUNC_0(&VAR_16, VAR_12, VAR_4);
 FUNC_0(&VAR_16, VAR_12, VAR_8);
 FUNC_0(&VAR_16, VAR_12, VAR_3);
 FUNC_0(&VAR_16, VAR_12, VAR_4);
 FUNC_0(&VAR_16, VAR_12, 5);
 FUNC_0(&VAR_16, VAR_12, VAR_5);
 FUNC_0(&VAR_16, VAR_12, VAR_1);
 FUNC_0(&VAR_16, VAR_12, VAR_0);
 FUNC_0(&VAR_16, VAR_12, VAR_1);

 if (VAR_16) {
  FUNC_4("Error building Activate UserN command.\n");
  return VAR_16;
 }

 return FUNC_2(VAR_12, VAR_11);
}
