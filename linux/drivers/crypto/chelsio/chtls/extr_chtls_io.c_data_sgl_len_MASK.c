
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_1(VAR_0)->nr_frags;
 return FUNC_0(VAR_1) * 8;
}
