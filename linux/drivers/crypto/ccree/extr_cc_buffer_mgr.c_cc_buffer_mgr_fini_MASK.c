
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_drvdata {struct buff_mgr_handle* buff_mgr_handle; } ;
struct buff_mgr_handle {int mlli_buffs_pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buff_mgr_handle*) ;

int FUNC_2(struct cc_drvdata *VAR_0)
{
 struct buff_mgr_handle *VAR_1 = VAR_0->buff_mgr_handle;

 if (VAR_1) {
  FUNC_0(VAR_1->mlli_buffs_pool);
  FUNC_1(VAR_0->buff_mgr_handle);
  VAR_0->buff_mgr_handle = ((void*)0);
 }
 return 0;
}
