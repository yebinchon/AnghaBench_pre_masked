
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_tlb_info {scalar_t__ end; scalar_t__ start; scalar_t__ freed_tables; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,void*,int,int ,struct cpumask const*) ;
 int FUNC_3 (struct cpumask const*,int ,void*,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,scalar_t__) ;
 struct cpumask* FUNC_5 (struct cpumask const*,struct flush_tlb_info const*) ;

void FUNC_6(const struct cpumask *VAR_7,
        const struct flush_tlb_info *VAR_8)
{
 FUNC_0(VAR_1);
 if (VAR_8->end == VAR_3)
  FUNC_4(VAR_4, VAR_3);
 else
  FUNC_4(VAR_4,
    (VAR_8->end - VAR_8->start) >> VAR_2);

 if (FUNC_1()) {
  VAR_7 = FUNC_5(VAR_7, VAR_8);
  if (VAR_7)
   FUNC_3(VAR_7, VAR_5,
            (void *)VAR_8, 1);
  return;
 }
 if (VAR_8->freed_tables)
  FUNC_3(VAR_7, VAR_5,
          (void *)VAR_8, 1);
 else
  FUNC_2(VAR_6, VAR_5,
    (void *)VAR_8, 1, VAR_0, VAR_7);
}
