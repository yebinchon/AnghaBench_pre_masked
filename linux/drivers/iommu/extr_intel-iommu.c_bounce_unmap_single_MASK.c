
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int domain; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct dmar_domain* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct device*,int ,size_t) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct device*,int ,size_t,size_t,int,unsigned long) ;
 int FUNC_7 (struct device*,int ,size_t) ;

__attribute__((used)) static void
FUNC_8(struct device *VAR_1, dma_addr_t VAR_2, size_t VAR_3,
      enum dma_data_direction VAR_4, unsigned long VAR_5)
{
 size_t VAR_6 = FUNC_0(VAR_3, VAR_0);
 struct dmar_domain *VAR_7;
 phys_addr_t VAR_8;

 VAR_7 = FUNC_2(VAR_1);
 if (FUNC_1(!VAR_7))
  return;

 VAR_8 = FUNC_3(&VAR_7->domain, VAR_2);
 if (FUNC_1(!VAR_8))
  return;

 FUNC_4(VAR_1, VAR_2, VAR_3);
 if (FUNC_5(VAR_8))
  FUNC_6(VAR_1, VAR_8, VAR_3,
      VAR_6, VAR_4, VAR_5);

 FUNC_7(VAR_1, VAR_2, VAR_3);
}
