
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  if (!VAR_2->vendor)
   VAR_2->vendor = "Generic";
  if (!VAR_2->name)
   VAR_2->name = "Mouse";





  FUNC_0(VAR_2->dev, VAR_1, VAR_0);
 }

 return 0;
}
