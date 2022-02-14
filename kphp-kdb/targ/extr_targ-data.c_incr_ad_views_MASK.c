
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct advert {int views; int l_views; int flags; int l_sump1; int g_sump1; int l_sump2; int g_sump2; long long price; long long click_money; } ;
struct TYPE_4__ {TYPE_1__* g; } ;
struct TYPE_3__ {double views; scalar_t__ clicks; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct advert*) ;
 struct advert* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (double) ;
 scalar_t__ FUNC_5 (struct advert*) ;
 long long VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6 (int VAR_5, int VAR_6, int VAR_7) {
  struct advert *VAR_8 = FUNC_3 (VAR_5, 0);
  if (!VAR_8) {
    if (!FUNC_0 (VAR_5)) {
      return;
    }
    VAR_8 = FUNC_3 (VAR_5, 1);
  }

  FUNC_1 (FUNC_5 (VAR_8) >= 0);
  if ((unsigned) VAR_6 < 0x100000) {
    VAR_8->views += VAR_6;
    VAR_8->l_views += VAR_6;
    VAR_4 += VAR_6;

    if (!VAR_7 && !(VAR_8->flags & VAR_0)) {
      VAR_8->flags |= VAR_1;
    }
    if (!VAR_7 && FUNC_4 (VAR_2.g[0].views)) {
      double VAR_9 = (double) VAR_2.g[0].clicks / VAR_2.g[0].views;
      VAR_8->l_sump1 += VAR_6 * VAR_9;
      VAR_8->g_sump1 += VAR_6 * VAR_9;
      VAR_8->l_sump2 += VAR_6 * VAR_9*VAR_9;
      VAR_8->g_sump2 += VAR_6 * VAR_9*VAR_9;
    }
    if (VAR_8->price < 0) {
      VAR_8->click_money += -VAR_8->price * (long long) VAR_6;
      VAR_3 += -VAR_8->price * (long long) VAR_6;
    }

    FUNC_2 (VAR_8);
  }
}
