
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct advert {int* user_list; int users; int ad_id; } ;


 int ** VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1 (struct advert *VAR_1) {
  int *VAR_2 = VAR_1->user_list, *VAR_3 = VAR_2 + VAR_1->users;
  int VAR_4 = VAR_1->ad_id;
  while (VAR_2 < VAR_3) {
    int VAR_5 = *VAR_2++;
    user_t *VAR_6 = VAR_0[VAR_5];
    if (VAR_6) {
      FUNC_0 (VAR_6, VAR_4);
    }
  }
}
