
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int clicked_ads; void* inactive_ads; void* active_ads; } ;
typedef TYPE_3__ user_t ;
typedef scalar_t__ treeref_t ;
struct lev_targ_click_ext {scalar_t__ type; int ad_id; int price; int user_id; } ;
struct advert {int flags; int price; double l_sump0; double g_sump0; double l_sump1; double l_sump2; double g_sump1; double g_sump2; int click_money; int g_clicked; int l_clicked; int l_clicked_old; } ;
struct TYPE_12__ {TYPE_2__* g; TYPE_1__* l; } ;
struct TYPE_11__ {int x; int z; } ;
struct TYPE_9__ {int views; scalar_t__ clicks; } ;
struct TYPE_8__ {int clicks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (struct advert*) ;
 struct advert* FUNC_5 (int) ;
 struct advert* FUNC_6 (int,int) ;
 TYPE_3__* FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 void* FUNC_10 (int ,void*,int,scalar_t__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct advert*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 double VAR_17 ;
 double VAR_18 ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15 (struct lev_targ_click_ext *VAR_19) {
  FUNC_3 (VAR_19->type == VAR_5 || VAR_19->type == VAR_6);
  if (VAR_13) {
    return 0;
  }
  user_t *VAR_20 = FUNC_7 (VAR_19->user_id);

  FUNC_1 (VAR_20);

  int VAR_21 = VAR_19->ad_id;
  if (!VAR_20 || VAR_21 <= 0 || VAR_21 >= VAR_7) {
    return -1;
  }

  struct advert *VAR_22 = FUNC_5 (VAR_21);
  if (!VAR_22) {
    if (!FUNC_2 (VAR_21)) {
      return -1;
    }
    VAR_22 = FUNC_6 (VAR_21, 1);
  }

  if (FUNC_9 (VAR_3, VAR_20->clicked_ads, VAR_21)) {

    return 0;
  }

  int VAR_23 = FUNC_12 (VAR_22);
  if (VAR_23 < 0) {
    return VAR_23;
  }

  treeref_t VAR_24;
  VAR_20->active_ads = FUNC_10 (VAR_3, VAR_20->active_ads, VAR_21, &VAR_24);

  if (VAR_24) {

    FUNC_3 ((VAR_22->flags & (VAR_2 | VAR_0)) == VAR_2);
    --VAR_10;
  } else {

    VAR_20->inactive_ads = FUNC_10 (VAR_3, VAR_20->inactive_ads, VAR_21, &VAR_24);
    if (VAR_24) {
      --VAR_12;
      FUNC_3 (!(VAR_22->flags & VAR_0));
    } else {
      VAR_24 = FUNC_13 (VAR_3);
      FUNC_0 (VAR_3, VAR_24)->x = VAR_21;
      FUNC_0 (VAR_3, VAR_24)->z = 0;
    }
  }

  int VAR_25 = FUNC_0 (VAR_3, VAR_24)->z;
  if (VAR_25 <= 0) {
    FUNC_3 (!VAR_25);
  }

  int VAR_26 = (VAR_19->type == VAR_6 ? VAR_19->price : VAR_22->price);
  if ((VAR_26 ^ VAR_22->price) < 0) {
    VAR_26 = 0;
  }
  FUNC_3 (VAR_22->price);

  if (!VAR_26) {
    FUNC_0 (VAR_3, VAR_24)->z = ~VAR_25;
  }



  VAR_20->clicked_ads = FUNC_8 (VAR_3, VAR_20->clicked_ads, VAR_24);
  ++VAR_11;

  if (!VAR_26) {
    return 0;
  }

  if ((VAR_22->flags & VAR_2) || VAR_26 < 0) {


    VAR_22->l_clicked_old++;
    VAR_22->l_clicked++;

    VAR_22->g_clicked++;
    VAR_22->l_sump0 += 1.0;
    VAR_22->g_sump0 += 1.0;

    if (VAR_25 >= VAR_8) {
      VAR_25 = VAR_8 - 1;
    }
    if (FUNC_14 (!VAR_4.g[VAR_25].views)) {
      VAR_25 = 0;
    }
    if (FUNC_11 (VAR_4.g[VAR_25].views)) {
      double VAR_27 = (double) VAR_4.g[VAR_25].clicks / VAR_4.g[VAR_25].views;
      if (FUNC_11 (VAR_27 <= VAR_22->l_sump1) && FUNC_11 (VAR_27*VAR_27 <= VAR_22->l_sump2)) {
 VAR_22->l_sump1 -= VAR_27;
 VAR_22->g_sump1 -= VAR_27;
 VAR_22->l_sump2 -= VAR_27*VAR_27;
 VAR_22->g_sump2 -= VAR_27*VAR_27;
 if (VAR_26 > 0 && (VAR_22->flags & VAR_1)) {
   VAR_16++;
   VAR_17 -= VAR_27;
   VAR_18 -= VAR_27*VAR_27;
 }
      } else {
 VAR_22->g_sump1 -= VAR_22->l_sump1;
 VAR_22->g_sump2 -= VAR_22->l_sump2;
 if (VAR_26 > 0 && (VAR_22->flags & VAR_1)) {
   VAR_16++;
   VAR_17 -= VAR_22->l_sump1;
   VAR_18 -= VAR_22->l_sump2;
 }
 VAR_22->l_sump1 = 0;
 VAR_22->l_sump2 = 0;
      }
    }

    if (VAR_26 > 0) {
      VAR_22->click_money += VAR_26 * VAR_9;
      VAR_14 += VAR_26 * VAR_9;



      if (VAR_25 > 0 && (VAR_22->flags & VAR_1)) {
 ++VAR_4.l[0].clicks;
 ++VAR_4.g[0].clicks;
 if (VAR_25 >= VAR_8) {
   VAR_25 = VAR_8 - 1;
 }
 ++VAR_4.l[VAR_25].clicks;
 ++VAR_4.g[VAR_25].clicks;
      }
    }
    FUNC_4 (VAR_22);
    VAR_15++;
    return 1;
  }

  return 0;
}
