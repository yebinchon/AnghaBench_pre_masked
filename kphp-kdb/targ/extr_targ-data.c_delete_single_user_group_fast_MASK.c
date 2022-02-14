
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_groups {int cur_groups; int* G; } ;
struct user {struct user_groups* grp; } ;


 unsigned int VAR_0 ;
 struct user** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4 (int VAR_4, int VAR_5) {
  FUNC_0 ((unsigned)VAR_4 < VAR_0);
  struct user *VAR_6 = VAR_1[VAR_4];
  FUNC_0 (VAR_6 && VAR_6->grp);

  struct user_groups *VAR_7 = VAR_6->grp;
  int VAR_8 = -1, VAR_9 = VAR_7->cur_groups;
  while (VAR_9 - VAR_8 > 1) {
    int VAR_10 = (VAR_8 + VAR_9) >> 1;
    if (VAR_5 < VAR_7->G[VAR_10]) {
      VAR_9 = VAR_10;
    } else {
      VAR_8 = VAR_10;
    }
  }

  FUNC_0 (VAR_8 >= 0 && VAR_7->G[VAR_8] == VAR_5);
  FUNC_3 (VAR_7->G + VAR_8, VAR_7->G + (VAR_8 + 1), (VAR_7->cur_groups - VAR_8 - 1) * 4);

  VAR_7->cur_groups--;

  FUNC_1 (VAR_4, FUNC_2 (VAR_2, VAR_5));
  VAR_3--;
}
