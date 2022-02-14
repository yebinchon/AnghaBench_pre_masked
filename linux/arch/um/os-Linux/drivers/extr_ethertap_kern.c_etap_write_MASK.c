
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {int dummy; } ;
struct sk_buff {int len; int data; } ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct sk_buff *VAR_1, struct uml_net_private *VAR_2)
{
 FUNC_1(VAR_1, 2);
 return FUNC_0(VAR_0, VAR_1->data, VAR_1->len);
}
