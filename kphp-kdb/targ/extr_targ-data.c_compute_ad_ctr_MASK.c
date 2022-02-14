
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {long long l_clicked_old; long long l_views; long long l_sump0; long long l_sump1; long long l_sump2; } ;


 struct advert* FUNC_0 (int,int ) ;

int FUNC_1 (int VAR_0, long long *VAR_1) {
  struct advert *VAR_2 = FUNC_0 (VAR_0, 0);
  if (!VAR_2) { return 0; }
  VAR_1[0] = VAR_2->l_clicked_old;
  VAR_1[1] = VAR_2->l_views;
  VAR_1[2] = VAR_2->l_sump0 * (1LL << 32) + 0.5;
  VAR_1[3] = VAR_2->l_sump1 * (1LL << 32) + 0.5;
  VAR_1[4] = VAR_2->l_sump2 * (1LL << 32) + 0.5;
  return 5;
}
