
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct tpu_priv {int lock; } ;
struct clocksource {int dummy; } ;


 struct tpu_priv* FUNC_0 (struct clocksource*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct tpu_priv*,unsigned long long*) ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_0)
{
 struct tpu_priv *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 unsigned long long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_2);
 if (FUNC_3(VAR_1, &VAR_3))
  VAR_3 += 0x100000000;
 FUNC_2(&VAR_1->lock, VAR_2);

 return VAR_3;
}
