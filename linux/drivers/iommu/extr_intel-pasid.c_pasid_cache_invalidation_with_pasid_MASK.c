
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qi_desc {int qw0; scalar_t__ qw3; scalar_t__ qw2; scalar_t__ qw1; } ;
struct intel_iommu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct qi_desc*,struct intel_iommu*) ;

__attribute__((used)) static void
FUNC_3(struct intel_iommu *VAR_1,
        u16 VAR_2, int VAR_3)
{
 struct qi_desc VAR_4;

 VAR_4.qw0 = FUNC_0(VAR_2) | VAR_0 | FUNC_1(VAR_3);
 VAR_4.qw1 = 0;
 VAR_4.qw2 = 0;
 VAR_4.qw3 = 0;

 FUNC_2(&VAR_4, VAR_1);
}
