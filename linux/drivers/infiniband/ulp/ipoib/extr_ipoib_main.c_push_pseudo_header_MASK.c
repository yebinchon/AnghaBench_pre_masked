
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipoib_pseudo_header {int hwaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 struct ipoib_pseudo_header* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, const char *VAR_2)
{
 struct ipoib_pseudo_header *VAR_3;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3));
 FUNC_0(VAR_3->hwaddr, VAR_2, VAR_0);
}
