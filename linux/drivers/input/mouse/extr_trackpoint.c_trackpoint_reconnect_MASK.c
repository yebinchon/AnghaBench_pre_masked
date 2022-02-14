
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trackpoint_data {scalar_t__ variant_id; } ;
struct psmouse {int ps2dev; struct trackpoint_data* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct psmouse*,int *,int *) ;
 int FUNC_2 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_1)
{
 struct trackpoint_data *VAR_2 = VAR_1->private;
 int VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_1(VAR_1, ((void*)0), ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_4 = VAR_2->variant_id == VAR_0 &&
      FUNC_0(&VAR_1->ps2dev) == 0;

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (VAR_3)
  return VAR_3;

 return 0;
}
