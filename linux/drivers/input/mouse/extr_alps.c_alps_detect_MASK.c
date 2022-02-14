
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; int * private; int model; } ;
struct alps_data {int flags; int proto_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psmouse*,struct alps_data*) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct alps_data*) ;
 struct alps_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*) ;

int FUNC_6(struct psmouse *VAR_4, bool VAR_5)
{
 struct alps_data *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, ((void*)0));
 if (VAR_7)
  return VAR_7;
 if (FUNC_1(VAR_4)) {
  FUNC_4(VAR_4,
       "ALPS CS19 trackpoint-only device detected, ignoring\n");
  return -VAR_1;
 }







 FUNC_5(VAR_4);

 VAR_6 = FUNC_3(sizeof(struct alps_data), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 if (VAR_5) {
  VAR_4->vendor = "ALPS";
  VAR_4->name = VAR_6->flags & VAR_0 ?
    "DualPoint TouchPad" : "GlidePoint";
  VAR_4->model = VAR_6->proto_version;
 } else {






  FUNC_2(VAR_6);
  VAR_4->private = ((void*)0);
 }

 return 0;
}
