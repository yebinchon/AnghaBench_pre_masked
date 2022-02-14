
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {unsigned int va; size_t sow; int window; int tmp_queue; int ** windowar; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct layer2 *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3;

 while (VAR_1->va != VAR_2) {
  VAR_1->va++;
  if (FUNC_4(VAR_0, &VAR_1->flag))
   VAR_1->va %= 128;
  else
   VAR_1->va %= 8;
  if (VAR_1->windowar[VAR_1->sow]) {
   FUNC_3(VAR_1->windowar[VAR_1->sow], 0);
   FUNC_2(&VAR_1->tmp_queue, VAR_1->windowar[VAR_1->sow]);
   VAR_1->windowar[VAR_1->sow] = ((void*)0);
  }
  VAR_1->sow = (VAR_1->sow + 1) % VAR_1->window;
 }
 VAR_3 = FUNC_1(&VAR_1->tmp_queue);
 while (VAR_3) {
  FUNC_0(VAR_3);
  VAR_3 = FUNC_1(&VAR_1->tmp_queue);
 }
}
