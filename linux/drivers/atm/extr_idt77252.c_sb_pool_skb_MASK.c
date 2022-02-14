
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct idt77252_dev {TYPE_1__* sbpool; } ;
struct TYPE_2__ {struct sk_buff** skb; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct idt77252_dev *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 > 3)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 > VAR_0 - 1)
  return ((void*)0);

 return VAR_1->sbpool[VAR_3].skb[VAR_4];
}
