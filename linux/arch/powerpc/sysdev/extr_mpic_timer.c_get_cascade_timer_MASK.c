
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u64 ;
struct timer_group_priv {int dummy; } ;
struct mpic_timer {int num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mpic_timer* FUNC_0 (struct timer_group_priv*) ;
 int FUNC_1 (struct timer_group_priv*,scalar_t__ const,int ) ;

__attribute__((used)) static struct mpic_timer *FUNC_2(struct timer_group_priv *VAR_2,
     u64 VAR_3)
{
 struct mpic_timer *VAR_4;


 const u64 VAR_5 = (u64)VAR_0 * (u64)VAR_1;
 int VAR_6;

 if (VAR_3 > VAR_5)
  return ((void*)0);


 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return ((void*)0);


 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4->num);
 if (VAR_6 < 0)
  return ((void*)0);

 return VAR_4;
}
