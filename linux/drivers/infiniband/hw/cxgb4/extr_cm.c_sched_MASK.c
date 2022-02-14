
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int cb; } ;
struct c4iw_dev {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct c4iw_dev *VAR_3, struct sk_buff *VAR_4)
{




 *((struct c4iw_dev **) (VAR_4->cb + sizeof(void *))) = VAR_3;




 FUNC_1(&VAR_0, VAR_4);
 FUNC_0(VAR_2, &VAR_1);
 return 0;
}
