
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_2, int VAR_3)
{
 if (FUNC_2(VAR_2 && !FUNC_5(VAR_2) && !FUNC_4(VAR_2))) {
  FUNC_0(VAR_2, 0);
  FUNC_3(2, &VAR_2->users);
 } else {
  VAR_2 = FUNC_1(VAR_3, VAR_0 | VAR_1);
 }
 return VAR_2;
}
