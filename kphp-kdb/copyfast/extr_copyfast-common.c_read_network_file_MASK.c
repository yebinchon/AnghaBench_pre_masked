
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int * VAR_1 ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_6 (char *VAR_5) {
  FILE *VAR_6 = FUNC_3 (VAR_5, "rt");
  if (!VAR_6) {
    FUNC_4 (VAR_3, "can not open network file (error %m)\n");
    return 0;
  }
  char VAR_7[256];
  while (!FUNC_1 (VAR_6)) {
    if (VAR_2 >= VAR_0) {
      FUNC_0 (VAR_6);
      return VAR_2;
    }
    FUNC_2 (VAR_7, 255, VAR_6);
    VAR_2 += FUNC_5(VAR_7, &VAR_1[VAR_2]);
  }
  if (VAR_4) {
    FUNC_4 (VAR_3, "Read %d rules from network description file\n", VAR_2);
  }
  FUNC_0 (VAR_6);
  return VAR_2;
}
