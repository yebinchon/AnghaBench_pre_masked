
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ACPIRegionContent {int regtype; int value; scalar_t__ addr; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ACPIRegionContent* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ACPIRegionContent*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*,int,int ,int ) ;
 int FUNC_7 (struct ACPIRegionContent*) ;
 int VAR_2 ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_3)
{
 struct ACPIRegionContent *VAR_4;
 FILE *VAR_5;

 if (!VAR_1) {
  return;
 }
 if ((VAR_5 = FUNC_5(VAR_3, "w")) == ((void*)0)) {
  FUNC_8("%s", VAR_3);
  return;
 }
 while (!FUNC_0(&VAR_0)) {
  VAR_4 = FUNC_1(&VAR_0);
  FUNC_6(VAR_5, "%d	0x%jx	0x%x\n",
      VAR_4->regtype, (uintmax_t)VAR_4->addr, VAR_4->value);
  FUNC_3(&VAR_0, VAR_4, VAR_2);
  FUNC_7(VAR_4);
 }

 FUNC_4(VAR_5);
 FUNC_2(&VAR_0);
}
