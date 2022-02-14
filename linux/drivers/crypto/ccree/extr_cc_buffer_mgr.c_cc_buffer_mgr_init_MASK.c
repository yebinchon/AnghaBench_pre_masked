
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {struct buff_mgr_handle* buff_mgr_handle; } ;
struct buff_mgr_handle {int mlli_buffs_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cc_drvdata*) ;
 int FUNC_1 (char*,struct device*,int,int ,int ) ;
 struct device* FUNC_2 (struct cc_drvdata*) ;
 struct buff_mgr_handle* FUNC_3 (int,int ) ;

int FUNC_4(struct cc_drvdata *VAR_5)
{
 struct buff_mgr_handle *VAR_6;
 struct device *VAR_7 = FUNC_2(VAR_5);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->buff_mgr_handle = VAR_6;

 VAR_6->mlli_buffs_pool =
  FUNC_1("dx_single_mlli_tables", VAR_7,
    VAR_3 *
    VAR_2,
    VAR_4, 0);

 if (!VAR_6->mlli_buffs_pool)
  goto error;

 return 0;

error:
 FUNC_0(VAR_5);
 return -VAR_0;
}
