
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mISDNhead {void* id; } ;
struct layer2 {void* down_id; int flag; int down_queue; int l2m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct layer2*,struct sk_buff*) ;
 int FUNC_2 (int *,int ,int *) ;
 void* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct layer2 *VAR_4, struct mISDNhead *VAR_5, struct sk_buff *VAR_6) {
 struct sk_buff *VAR_7 = VAR_6;
 int VAR_8 = -VAR_0;

 if (FUNC_7(VAR_2, &VAR_4->flag)) {
  if (VAR_5->id == VAR_4->down_id) {
   VAR_7 = FUNC_4(&VAR_4->down_queue);
   if (VAR_7) {
    VAR_4->down_id = FUNC_3(VAR_7);
    if (FUNC_1(VAR_4, VAR_7)) {
     FUNC_0(VAR_7);
     VAR_4->down_id = VAR_3;
    }
   } else
    VAR_4->down_id = VAR_3;
   if (VAR_8) {
    FUNC_0(VAR_6);
    VAR_8 = 0;
   }
   if (VAR_4->down_id == VAR_3) {
    FUNC_5(VAR_2, &VAR_4->flag);
    FUNC_2(&VAR_4->l2m, VAR_1, ((void*)0));
   }
  }
 }
 if (!FUNC_6(VAR_2, &VAR_4->flag)) {
  VAR_7 = FUNC_4(&VAR_4->down_queue);
  if (VAR_7) {
   VAR_4->down_id = FUNC_3(VAR_7);
   if (FUNC_1(VAR_4, VAR_7)) {
    FUNC_0(VAR_7);
    VAR_4->down_id = VAR_3;
    FUNC_5(VAR_2, &VAR_4->flag);
   }
  } else
   FUNC_5(VAR_2, &VAR_4->flag);
 }
 return VAR_8;
}
