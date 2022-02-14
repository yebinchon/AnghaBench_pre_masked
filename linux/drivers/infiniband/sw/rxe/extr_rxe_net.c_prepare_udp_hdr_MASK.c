
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; int len; void* source; void* dest; } ;
struct sk_buff {int len; } ;
typedef void* __be16 ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct udphdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, __be16 VAR_1,
       __be16 VAR_2)
{
 struct udphdr *VAR_3;

 FUNC_0(VAR_0, sizeof(*VAR_3));
 FUNC_2(VAR_0);
 VAR_3 = FUNC_3(VAR_0);

 VAR_3->dest = VAR_2;
 VAR_3->source = VAR_1;
 VAR_3->len = FUNC_1(VAR_0->len);
 VAR_3->check = 0;
}
