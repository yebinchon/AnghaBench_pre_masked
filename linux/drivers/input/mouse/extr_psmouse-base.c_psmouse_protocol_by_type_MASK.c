
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_protocol {int dummy; } ;
typedef enum psmouse_type { ____Placeholder_psmouse_type } psmouse_type ;


 int FUNC_0 (int) ;
 struct psmouse_protocol* FUNC_1 (int) ;
 struct psmouse_protocol const* VAR_0 ;

__attribute__((used)) static const struct psmouse_protocol *FUNC_2(enum psmouse_type VAR_1)
{
 const struct psmouse_protocol *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(1);
 return &VAR_0[0];
}
