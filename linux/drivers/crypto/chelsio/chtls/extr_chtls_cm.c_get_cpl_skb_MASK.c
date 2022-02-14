
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t len; } ;
typedef int gfp_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sk_buff*,size_t) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sk_buff *VAR_0,
       size_t VAR_1, gfp_t VAR_2)
{
 if (FUNC_4(!FUNC_7(VAR_0) && !FUNC_5(VAR_0))) {
  FUNC_0(VAR_0->len < VAR_1, "skb alloc error");
  FUNC_2(VAR_0, VAR_1);
  FUNC_6(VAR_0);
 } else {
  VAR_0 = FUNC_3(VAR_1, VAR_2);
  if (VAR_0)
   FUNC_1(VAR_0, VAR_1);
 }
 return VAR_0;
}
