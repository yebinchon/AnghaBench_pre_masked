
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pair_hostid_result {unsigned int result; } ;
typedef int a ;


 int FUNC_0 (struct pair_hostid_result*,struct pair_hostid_result*,int) ;

__attribute__((used)) static void FUNC_1 (struct pair_hostid_result *VAR_0, int *VAR_1, unsigned VAR_2, unsigned VAR_3) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < (*VAR_1); VAR_4++) {
    if ((VAR_0[VAR_4].result & VAR_3) == VAR_2) {
      if (VAR_5 < VAR_4) {
        FUNC_0 (&VAR_0[VAR_5], &VAR_0[VAR_4], sizeof (VAR_0[0]));
      }
      VAR_5++;
    }
  }
  *VAR_1 = VAR_5;
}
