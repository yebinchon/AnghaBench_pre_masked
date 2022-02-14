
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int hw_cap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dmar_unit*,int) ;
 int FUNC_3 (struct dmar_unit*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct dmar_unit *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2->hw_cap); VAR_6++) {
  VAR_4 = (FUNC_0(VAR_2->hw_cap) + VAR_6) * 16;
  VAR_3 = FUNC_2(VAR_2, VAR_4 + 12);
  if ((VAR_3 & VAR_0) == 0)
   continue;
  FUNC_3(VAR_2, VAR_4 + 12, VAR_0);
 }
 VAR_5 = FUNC_2(VAR_2, VAR_1);
 FUNC_3(VAR_2, VAR_1, VAR_5);
}
