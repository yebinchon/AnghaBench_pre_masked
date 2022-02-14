
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_hda {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sti_hda*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sti_hda *VAR_2, u32 *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 FUNC_0("\n");

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_2, VAR_3[VAR_5], VAR_1 + VAR_5 * 4);
 for (VAR_5 = VAR_4; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_2, 0, VAR_1 + VAR_5 * 4);
}
