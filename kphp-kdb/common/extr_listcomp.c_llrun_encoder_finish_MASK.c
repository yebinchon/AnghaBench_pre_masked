
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_encoder {int k; int K; int* L; int bw; int N; } ;
typedef int dyn_mark_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int*,int,int ,int*,int*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int*,int,int ,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct list_encoder*,int,int) ;
 scalar_t__ FUNC_11 (int*,int) ;
 int FUNC_12 (int) ;
 int* FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14 (struct list_encoder *VAR_1) {
  dyn_mark_t VAR_2;
  FUNC_5 (VAR_2);
  FUNC_0 (VAR_1->k == VAR_1->K);
  int VAR_3 = FUNC_9 (VAR_1->N, VAR_1->K);
  int VAR_4 = FUNC_12 (VAR_3);
  int *VAR_5 = FUNC_13 (VAR_4 * sizeof (int));
  int VAR_6 = -1, VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_1->K; VAR_7++) {
    int VAR_8 = VAR_1->L[VAR_7] - VAR_6;
    FUNC_0 (VAR_8 > 0 && VAR_8 <= VAR_3);
    VAR_5[FUNC_1 (VAR_8)]++;
    VAR_6 = VAR_1->L[VAR_7];
  }
  int VAR_9, *VAR_10 = FUNC_8 (VAR_5, VAR_4, VAR_0, &VAR_9);
  FUNC_0 (FUNC_11 (VAR_10, VAR_4) == 0);
  FUNC_2 (&VAR_1->bw, VAR_10, VAR_4);
  const int VAR_11 = VAR_9 < 2;
  int VAR_12[VAR_0+1], VAR_13[32], VAR_14[32 * (VAR_0 + 1)];
  FUNC_4 (VAR_10, VAR_4, VAR_0, VAR_12, VAR_13, VAR_14);
  VAR_6 = -1;
  for (VAR_7 = 0; VAR_7 < VAR_1->K; VAR_7++) {
    int VAR_15 = VAR_1->L[VAR_7] - VAR_6;
    FUNC_0 (VAR_15 > 0 && VAR_15 <= VAR_3);
    int VAR_16 = FUNC_1 (VAR_15);
    FUNC_0 (VAR_16 >= 0 && VAR_16 < VAR_4);
    if (!VAR_11) {
      FUNC_10 (VAR_1, VAR_13[VAR_16], VAR_10[VAR_16]);
    }
    FUNC_3 (&VAR_1->bw, VAR_15 ^ (1 << VAR_16), VAR_16);
    VAR_6 = VAR_1->L[VAR_7];
  }

  FUNC_7 (VAR_1->L);
  FUNC_6 (VAR_2);
}
