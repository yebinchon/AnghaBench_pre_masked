
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_req_mgr_handle {int comptask; int bl_lock; int bl_len; int backlog; } ;
struct cc_drvdata {struct cc_req_mgr_handle* request_mgr_handle; } ;
struct cc_bl_item {int list; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct device* FUNC_1 (struct cc_drvdata*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cc_drvdata *VAR_0,
          struct cc_bl_item *VAR_1)
{
 struct cc_req_mgr_handle *VAR_2 = VAR_0->request_mgr_handle;
 struct device *VAR_3 = FUNC_1(VAR_0);

 FUNC_3(&VAR_2->bl_lock);
 FUNC_2(&VAR_1->list, &VAR_2->backlog);
 ++VAR_2->bl_len;
 FUNC_0(VAR_3, "+++bl len: %d\n", VAR_2->bl_len);
 FUNC_4(&VAR_2->bl_lock);
 FUNC_5(&VAR_2->comptask);
}
