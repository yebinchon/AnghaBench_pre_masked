
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_file {int mutex; int ucontext; } ;
struct ib_uverbs_destroy_flow {int flow_handle; scalar_t__ comp_mask; } ;
struct ib_uobject {int list; scalar_t__ live; struct ib_flow* object; } ;
struct ib_udata {int inlen; } ;
struct ib_flow {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ib_uverbs_destroy_flow*,struct ib_udata*,int) ;
 int FUNC_1 (struct ib_flow*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct ib_uobject*) ;
 struct ib_uobject* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ib_uobject*) ;
 int FUNC_8 (struct ib_uobject*) ;

int FUNC_9(struct ib_uverbs_file *VAR_2,
         struct ib_device *VAR_3,
         struct ib_udata *VAR_4,
         struct ib_udata *VAR_5)
{
 struct ib_uverbs_destroy_flow VAR_6;
 struct ib_flow *VAR_7;
 struct ib_uobject *VAR_8;
 int VAR_9;

 if (VAR_4->inlen < sizeof(VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_0(&VAR_6, VAR_4, sizeof(VAR_6));
 if (VAR_9)
  return VAR_9;

 if (VAR_6.comp_mask)
  return -VAR_0;

 VAR_8 = FUNC_3(&VAR_1, VAR_6.flow_handle,
         VAR_2->ucontext);
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = VAR_8->object;

 VAR_9 = FUNC_1(VAR_7);
 if (!VAR_9)
  VAR_8->live = 0;

 FUNC_8(VAR_8);

 FUNC_2(&VAR_1, VAR_8);

 FUNC_5(&VAR_2->mutex);
 FUNC_4(&VAR_8->list);
 FUNC_6(&VAR_2->mutex);

 FUNC_7(VAR_8);

 return VAR_9;
}
