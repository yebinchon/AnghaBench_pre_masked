
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct left_subtree_bits_array {int n; scalar_t__ idx; int a; } ;
struct bitwriter {unsigned char* ptr; } ;
typedef int dyn_mark_t ;


 int FUNC_0 (struct bitwriter*,int*,int,int,int,struct left_subtree_bits_array*) ;
 int FUNC_1 (struct bitwriter*,int*,int,int,int,struct left_subtree_bits_array*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct bitwriter*,struct bitwriter*,int) ;
 int FUNC_6 (int) ;

void FUNC_7 (struct bitwriter *VAR_0, int *VAR_1, int VAR_2, int VAR_3, int VAR_4, int *VAR_5) {
  struct bitwriter VAR_6;
  FUNC_5 (&VAR_6, VAR_0, sizeof (struct bitwriter));
  unsigned char VAR_7 = *(VAR_0->ptr);
  struct left_subtree_bits_array VAR_8;
  VAR_8.n = FUNC_4 (VAR_2, VAR_3, VAR_4);
  dyn_mark_t VAR_9;
  FUNC_2 (VAR_9);
  VAR_8.a = FUNC_6 (VAR_8.n * sizeof (int));
  VAR_8.idx = 0;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);
  FUNC_5 (VAR_0, &VAR_6, sizeof (struct bitwriter));
  *(VAR_0->ptr) = VAR_7;
  VAR_8.idx = 0;
  if (VAR_5 != ((void*)0)) {
    *VAR_5 = 0;
  }
  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8, VAR_5);
  FUNC_3 (VAR_9);
}
