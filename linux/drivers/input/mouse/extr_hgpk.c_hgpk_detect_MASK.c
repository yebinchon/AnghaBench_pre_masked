
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; int model; } ;


 int FUNC_0 (struct psmouse*) ;

int FUNC_1(struct psmouse *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1) {
  VAR_0->vendor = "ALPS";
  VAR_0->name = "HGPK";
  VAR_0->model = VAR_2;
 }

 return 0;
}
