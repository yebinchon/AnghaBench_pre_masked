
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_man {int cur_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vmw_cmdbuf_man *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  if (FUNC_1(&VAR_1->cur_mutex))
   return -VAR_0;
 } else {
  FUNC_0(&VAR_1->cur_mutex);
 }

 return 0;
}
