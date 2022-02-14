
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__,int ) ;
 struct page* FUNC_4 (unsigned long,int,struct page*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct page *FUNC_6(u64 *VAR_0, u64 VAR_1, struct page *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 while (FUNC_3(VAR_0, VAR_1, 0) != VAR_1) {
  FUNC_5("AMD-Vi: IOMMU pte changed since we read it\n");
  VAR_1 = *VAR_0;
 }

 if (!FUNC_2(VAR_1))
  return VAR_2;

 VAR_3 = (unsigned long)FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);

 return FUNC_4(VAR_3, VAR_4, VAR_2);
}
