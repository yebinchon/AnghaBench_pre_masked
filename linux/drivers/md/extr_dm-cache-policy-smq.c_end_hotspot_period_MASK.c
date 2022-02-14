
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {scalar_t__ next_hotspot_period; int hotspot_stats; int hotspot; int nr_hotspot_blocks; int hotspot_hit_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct smq_policy*) ;
 int FUNC_5 (struct smq_policy*) ;

__attribute__((used)) static void FUNC_6(struct smq_policy *VAR_2)
{
 FUNC_0(VAR_2->hotspot_hit_bits, VAR_2->nr_hotspot_blocks);
 FUNC_5(VAR_2);

 if (FUNC_3(VAR_1, VAR_2->next_hotspot_period)) {
  FUNC_4(VAR_2);
  FUNC_1(&VAR_2->hotspot);
  FUNC_2(&VAR_2->hotspot_stats);
  VAR_2->next_hotspot_period = VAR_1 + VAR_0;
 }
}
