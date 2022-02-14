
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa930_trkball {scalar_t__ mmio_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pxa930_trkball*,int) ;

__attribute__((used)) static void FUNC_2(struct pxa930_trkball *VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_2->mmio_base + VAR_0);


 FUNC_1(VAR_2, VAR_3 | VAR_1);
}
