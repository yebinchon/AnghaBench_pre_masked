
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct OpalMsgNode {int list; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct OpalMsgNode* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,void*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_6,
     unsigned long VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 struct OpalMsgNode *VAR_10;

 if (VAR_7 != VAR_2)
  return 0;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_3("MEMORY_ERROR: out of memory, Opal message event not"
         "handled\n");
  return -VAR_0;
 }
 FUNC_2(&VAR_10->msg, VAR_8, sizeof(VAR_10->msg));

 FUNC_5(&VAR_4, VAR_9);
 FUNC_1(&VAR_10->list, &VAR_5);
 FUNC_6(&VAR_4, VAR_9);

 FUNC_4(&VAR_3);
 return 0;
}
