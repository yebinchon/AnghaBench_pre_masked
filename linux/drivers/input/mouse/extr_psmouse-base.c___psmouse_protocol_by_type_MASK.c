
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_protocol {int type; } ;
typedef enum psmouse_type { ____Placeholder_psmouse_type } psmouse_type ;


 int FUNC_0 (struct psmouse_protocol const*) ;
 struct psmouse_protocol const* VAR_0 ;

__attribute__((used)) static const struct psmouse_protocol *FUNC_1(enum psmouse_type VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].type == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
