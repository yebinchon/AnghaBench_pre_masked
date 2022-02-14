
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int dummy; } ;
struct layer2 {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,struct sk_buff*) ;

inline u_char
FUNC_2(struct layer2 *VAR_0, struct sk_buff *VAR_1)
{
 u_char VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1);
 return VAR_2;
}
