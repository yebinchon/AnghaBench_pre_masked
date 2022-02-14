
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ vs; scalar_t__ va; int i_queue; int T203; int t203; scalar_t__ sow; scalar_t__ vr; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*,struct sk_buff*) ;
 int FUNC_3 (struct layer2*,int ,void*) ;
 int FUNC_4 (struct layer2*,int ,int ,int *) ;
 int FUNC_5 (struct FsmInst*,int ) ;
 int FUNC_6 (struct FsmInst*,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int *,int) ;
 int FUNC_8 (struct layer2*,struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct layer2*,int) ;

__attribute__((used)) static void
FUNC_12(struct FsmInst *VAR_7, int VAR_8, void *VAR_9)
{
 struct layer2 *VAR_10 = VAR_7->userdata;
 struct sk_buff *VAR_11 = VAR_9;
 int VAR_12 = 0;

 FUNC_8(VAR_10, VAR_11, VAR_6 | FUNC_2(VAR_10, VAR_11), VAR_4);

 FUNC_3(VAR_10, VAR_3, (void *) 'F');

 if (VAR_10->vs != VAR_10->va) {
  FUNC_10(&VAR_10->i_queue);
  VAR_12 = 1;
 }

 FUNC_1(VAR_10);
 VAR_10->vs = 0;
 VAR_10->va = 0;
 VAR_10->vr = 0;
 VAR_10->sow = 0;
 FUNC_5(VAR_7, VAR_5);
 FUNC_11(VAR_10, 3);
 FUNC_7(&VAR_10->t203, VAR_10->T203, VAR_2, ((void*)0), 3);

 if (VAR_12)
  FUNC_4(VAR_10, VAR_0, 0, ((void*)0));




 if (FUNC_9(&VAR_10->i_queue) && FUNC_0(VAR_10))
  FUNC_6(VAR_7, VAR_1, ((void*)0));
}
