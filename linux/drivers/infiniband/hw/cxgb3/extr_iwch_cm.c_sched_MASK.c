
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int cb; } ;
struct iwch_ep_common {int dummy; } ;


 int FUNC_0 (struct iwch_ep_common*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct t3cdev *VAR_3, struct sk_buff *VAR_4, void *VAR_5)
{
 struct iwch_ep_common *VAR_6 = VAR_5;

 FUNC_0(VAR_6);




 *((void **) VAR_4->cb) = VAR_5;
 *((struct t3cdev **) (VAR_4->cb + sizeof(void *))) = VAR_3;




 FUNC_2(&VAR_0, VAR_4);
 FUNC_1(VAR_2, &VAR_1);
 return 0;
}
