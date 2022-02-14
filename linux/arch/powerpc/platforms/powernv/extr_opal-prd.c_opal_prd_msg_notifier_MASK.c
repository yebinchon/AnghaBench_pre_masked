
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_prd_msg_queue_item {int list; int msg; } ;
struct opal_prd_msg_header {int size; } ;
struct opal_msg {scalar_t__ params; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 struct opal_prd_msg_queue_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_7,
  unsigned long VAR_8, void *VAR_9)
{
 struct opal_prd_msg_queue_item *VAR_10;
 struct opal_prd_msg_header *VAR_11;
 struct opal_msg *VAR_12 = VAR_9;
 int VAR_13, VAR_14;
 unsigned long VAR_15;

 if (VAR_8 != VAR_2 && VAR_8 != VAR_3)
  return 0;



 VAR_11 = (void *)VAR_12->params;
 VAR_13 = FUNC_0(VAR_11->size);
 VAR_14 = VAR_13 + sizeof(*VAR_10) - sizeof(VAR_10->msg);

 VAR_10 = FUNC_1(VAR_14, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_3(&VAR_10->msg, VAR_12->params, VAR_13);

 FUNC_4(&VAR_5, VAR_15);
 FUNC_2(&VAR_10->list, &VAR_4);
 FUNC_5(&VAR_5, VAR_15);

 FUNC_6(&VAR_6);

 return 0;
}
