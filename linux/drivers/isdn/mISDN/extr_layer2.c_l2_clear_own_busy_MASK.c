
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct layer2 *VAR_7 = VAR_4->userdata;
 struct sk_buff *VAR_8 = VAR_6;

 if (!FUNC_2(VAR_1, &VAR_7->flag)) {
  FUNC_1(VAR_7, VAR_2, VAR_3, 0);
  FUNC_2(VAR_0, &VAR_7->flag);
 }
 FUNC_0(VAR_8);
}
