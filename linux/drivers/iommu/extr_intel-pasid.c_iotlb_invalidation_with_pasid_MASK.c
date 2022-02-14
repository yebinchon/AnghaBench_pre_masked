
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qi_desc {int qw0; scalar_t__ qw3; scalar_t__ qw2; scalar_t__ qw1; } ;
struct intel_iommu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct qi_desc*,struct intel_iommu*) ;

__attribute__((used)) static void
FUNC_4(struct intel_iommu *VAR_2, u16 VAR_3, u32 VAR_4)
{
 struct qi_desc VAR_5;

 VAR_5.qw0 = FUNC_2(VAR_4) | FUNC_0(VAR_3) |
   FUNC_1(VAR_1) | VAR_0;
 VAR_5.qw1 = 0;
 VAR_5.qw2 = 0;
 VAR_5.qw3 = 0;

 FUNC_3(&VAR_5, VAR_2);
}
