
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ioapic_gsi {int gsi_end; int gsi_base; } ;


 struct mp_ioapic_gsi* FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0)
{
 struct mp_ioapic_gsi *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->gsi_end - VAR_1->gsi_base + 1;
}
