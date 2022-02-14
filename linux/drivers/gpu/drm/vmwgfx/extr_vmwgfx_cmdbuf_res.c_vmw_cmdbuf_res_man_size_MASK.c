
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_res_manager {int dummy; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

size_t FUNC_2(void)
{
 static size_t VAR_1;

 if (FUNC_1(VAR_1 == 0))
  VAR_1 =
   FUNC_0(sizeof(struct vmw_cmdbuf_res_manager)) +
   FUNC_0(sizeof(struct hlist_head) <<
          VAR_0);

 return VAR_1;
}
