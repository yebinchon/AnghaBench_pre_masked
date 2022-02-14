
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_protocol {scalar_t__ (* init ) (struct psmouse*) ;int try_passthru; int detect; } ;
struct psmouse {int dummy; } ;
typedef enum psmouse_type { ____Placeholder_psmouse_type } psmouse_type ;


 unsigned int VAR_0 ;
 struct psmouse_protocol* FUNC_0 (int) ;
 int FUNC_1 (int ,struct psmouse*,int ,int) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;

__attribute__((used)) static bool FUNC_3(struct psmouse *VAR_1,
     enum psmouse_type VAR_2,
     unsigned int *VAR_3,
     bool VAR_4, bool VAR_5)
{
 const struct psmouse_protocol *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6)
  return 0;

 if (!FUNC_1(VAR_6->detect, VAR_1, VAR_6->try_passthru,
          VAR_4))
  return 0;

 if (VAR_4 && VAR_6->init && VAR_5) {
  if (VAR_6->init(VAR_1) != 0) {




   if (*VAR_3 > VAR_0)
    *VAR_3 = VAR_0;

   return 0;
  }
 }

 return 1;
}
