
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setsump {long long sump0; long long sump1; long long sump2; } ;
struct advert {int flags; scalar_t__ price; int delta; int lambda; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 double FUNC_2 (scalar_t__,long long,long long,long long,double*) ;
 struct advert* FUNC_3 (int,int ) ;
 int FUNC_4 (struct lev_targ_ad_setsump*) ;

int FUNC_5 (int VAR_3, long long VAR_4, long long VAR_5, long long VAR_6) {
  struct advert *VAR_7 = FUNC_3 (VAR_3, 0);
  if (!VAR_7 || (VAR_7->flags & VAR_0) || FUNC_0 (VAR_7) || VAR_4 < 0 || VAR_5 <= 0 || VAR_6 <= 0) {
    return 0;
  }
  if (VAR_7->price <= 0) {
    return 1;
  }
  double VAR_8 = 1.0 / (1LL << 32), VAR_9;
  double VAR_10 = FUNC_2 (VAR_7->price, VAR_4 * VAR_8, VAR_5 * VAR_8, VAR_6 * VAR_8, &VAR_9);
  if (VAR_9 >= (1 - VAR_1) * VAR_7->delta && VAR_9 <= (1 + VAR_1) * VAR_7->delta && VAR_10 >= (1 - VAR_1) * VAR_7->lambda && VAR_10 <= (1 + VAR_1) * VAR_7->lambda) {
    return 1;
  }
  struct lev_targ_ad_setsump *VAR_11 = (struct lev_targ_ad_setsump *) FUNC_1 (VAR_2, 32, VAR_3);
  VAR_11->sump0 = VAR_4;
  VAR_11->sump1 = VAR_5;
  VAR_11->sump2 = VAR_6;
  return FUNC_4 (VAR_11);
}
