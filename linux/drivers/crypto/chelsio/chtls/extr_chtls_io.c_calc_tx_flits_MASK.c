
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 unsigned int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static unsigned int FUNC_4(const struct sk_buff *VAR_0,
      unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = VAR_1 / 8;
 VAR_3 = FUNC_1(VAR_0)->nr_frags;
 if (FUNC_2(VAR_0) != FUNC_3(VAR_0))
  VAR_3++;
 return VAR_2 + FUNC_0(VAR_3);
}
