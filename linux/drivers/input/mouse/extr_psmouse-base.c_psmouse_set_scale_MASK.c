
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;
typedef enum psmouse_scale { ____Placeholder_psmouse_scale } psmouse_scale ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_3, enum psmouse_scale VAR_4)
{
 FUNC_0(&VAR_3->ps2dev, ((void*)0),
      VAR_4 == VAR_2 ? VAR_1 :
            VAR_0);
}
