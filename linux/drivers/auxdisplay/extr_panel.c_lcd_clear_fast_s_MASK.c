
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {int height; int hwidth; } ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct charlcd *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->height * VAR_1->hwidth; VAR_2++) {
  FUNC_0(0x5F);
  FUNC_0(' ' & 0x0F);
  FUNC_0((' ' >> 4) & 0x0F);

  FUNC_3(40);
 }
 FUNC_2(&VAR_0);
}
