
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int dummy; } ;
typedef int block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct locfile*,int *) ;
 int FUNC_4 (struct locfile*,int ,char*) ;

int FUNC_5(struct locfile* VAR_2, block* VAR_3) {
  int VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4) return VAR_4;
  if (FUNC_1(*VAR_3)) {
    FUNC_4(VAR_2, VAR_1, "jq: error: library should only have function definitions, not a main expression");
    return 1;
  }
  FUNC_0(FUNC_2(*VAR_3, VAR_0));
  return 0;
}
