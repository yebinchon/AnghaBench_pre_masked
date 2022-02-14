
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {int height; int hwidth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char) ;

__attribute__((used)) static void FUNC_4(struct charlcd *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->height * VAR_2->hwidth; VAR_3++) {

  FUNC_3(VAR_0, ' ');
  FUNC_2(60);
 }

 FUNC_1(&VAR_1);
}
