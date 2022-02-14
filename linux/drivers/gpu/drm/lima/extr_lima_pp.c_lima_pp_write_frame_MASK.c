
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ip {scalar_t__ iomem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lima_ip *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_1(VAR_4[VAR_6], VAR_3->iomem + VAR_0 + VAR_6 * 4);

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_1(VAR_5[VAR_8++], VAR_3->iomem + FUNC_0(VAR_6) + VAR_7 * 4);
 }
}
