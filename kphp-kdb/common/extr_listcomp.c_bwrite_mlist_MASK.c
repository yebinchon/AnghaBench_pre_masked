
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct left_subtree_bits_array {int n; scalar_t__ idx; int a; } ;
struct bitwriter {unsigned char* ptr; } ;
typedef int dyn_mark_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int*,int*,int ,int const,int,struct left_subtree_bits_array*,int) ;
 int FUNC_2 (struct bitwriter*,int*,int*,int ,int const,int,struct left_subtree_bits_array*,int*,int) ;
 int FUNC_3 (struct bitwriter*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const,int) ;
 int FUNC_7 (struct bitwriter*,struct bitwriter*,int) ;
 int FUNC_8 (int) ;

void FUNC_9 (struct bitwriter *VAR_0, int *VAR_1, int *VAR_2, int VAR_3, int VAR_4, int *VAR_5) {
  FUNC_0 (VAR_1[0] == -1);
  const int VAR_6 = VAR_3 + 1;
  int VAR_7, VAR_8 = 1;
  for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++) {
    FUNC_0 (VAR_2[VAR_7] >= 1);
    if (VAR_2[VAR_7] > 1) {
      VAR_8 = 0;
      break;
    }
  }
  struct bitwriter VAR_9;
  FUNC_7 (&VAR_9, VAR_0, sizeof (struct bitwriter));
  unsigned char VAR_10 = *(VAR_0->ptr);
  struct left_subtree_bits_array VAR_11;
  VAR_11.n = FUNC_6 (0, VAR_6, VAR_4);
  dyn_mark_t VAR_12;
  FUNC_4 (VAR_12);
  VAR_11.a = FUNC_8 (VAR_11.n * sizeof (int));
  VAR_11.idx = 0;
  FUNC_3 (VAR_0, VAR_8, 1);
  FUNC_1 (VAR_0, VAR_1, VAR_2, 0, VAR_6, VAR_4, &VAR_11, VAR_8);
  FUNC_7 (VAR_0, &VAR_9, sizeof (struct bitwriter));
  *(VAR_0->ptr) = VAR_10;
  VAR_11.idx = 0;
  if (VAR_5 != ((void*)0)) {
    *VAR_5 = 0;
  }
  FUNC_3 (VAR_0, VAR_8, 1);
  FUNC_2 (VAR_0, VAR_1, VAR_2, 0, VAR_6, VAR_4, &VAR_11, VAR_5, VAR_8);
  FUNC_5 (VAR_12);
}
