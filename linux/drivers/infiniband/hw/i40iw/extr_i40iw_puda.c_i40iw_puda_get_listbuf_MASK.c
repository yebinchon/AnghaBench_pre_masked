
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {scalar_t__ next; } ;
struct i40iw_puda_buf {int list; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

__attribute__((used)) static struct i40iw_puda_buf *FUNC_2(struct list_head *VAR_0)
{
 struct i40iw_puda_buf *VAR_1 = ((void*)0);

 if (!FUNC_1(VAR_0)) {
  VAR_1 = (struct i40iw_puda_buf *)VAR_0->next;
  FUNC_0((struct list_head *)&VAR_1->list);
 }
 return VAR_1;
}
