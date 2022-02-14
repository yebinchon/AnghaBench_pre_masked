
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int dummy; } ;
struct _parisc_agp_info {int gart_base; scalar_t__ ioc_regs; int gart_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct _parisc_agp_info VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct agp_memory *VAR_2)
{
 struct _parisc_agp_info *VAR_3 = &VAR_1;

 FUNC_2(VAR_3->gart_base | FUNC_0(VAR_3->gart_size), VAR_3->ioc_regs+VAR_0);
 FUNC_1(VAR_3->ioc_regs+VAR_0);
}
