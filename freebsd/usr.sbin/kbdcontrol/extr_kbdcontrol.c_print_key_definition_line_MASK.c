
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keyent_t {int spcl; int* map; int flgs; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_3, int VAR_4, struct keyent_t *VAR_5)
{
 int VAR_6;


 if (VAR_2)
  FUNC_0(VAR_3, " 0x%02x  ", VAR_4);
 else
  FUNC_0(VAR_3, "  %03d  ", VAR_4);


 for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {
  if (VAR_5->spcl & (0x80 >> VAR_6))
   FUNC_1(VAR_3, VAR_5->map[VAR_6] | VAR_1);
  else
   FUNC_1(VAR_3, VAR_5->map[VAR_6]);
 }


 switch (VAR_5->flgs) {
 case 0:
  FUNC_0(VAR_3, "  O\n");
  break;
 case 1:
  FUNC_0(VAR_3, "  C\n");
  break;
 case 2:
  FUNC_0(VAR_3, "  N\n");
  break;
 case 3:
  FUNC_0(VAR_3, "  B\n");
  break;
 }
}
