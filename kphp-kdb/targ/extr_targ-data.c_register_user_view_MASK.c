
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int inactive_ads; int active_ads; int clicked_ads; } ;
typedef TYPE_3__ user_t ;
typedef scalar_t__ treeref_t ;
struct lev_targ_user_view {scalar_t__ type; int ad_id; int user_id; } ;
struct advert {double l_sump1; double g_sump1; double l_sump2; double g_sump2; scalar_t__ price; int flags; } ;
struct TYPE_12__ {TYPE_2__* g; TYPE_1__* l; } ;
struct TYPE_11__ {int z; int x; } ;
struct TYPE_9__ {double views; scalar_t__ clicks; } ;
struct TYPE_8__ {int views; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct advert*) ;
 struct advert* FUNC_5 (int) ;
 struct advert* FUNC_6 (int,int) ;
 TYPE_3__* FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (double) ;
 int FUNC_12 (struct advert*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct advert*,int ) ;
 scalar_t__ VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16 (struct lev_targ_user_view *VAR_11) {
  FUNC_3 (VAR_11->type == VAR_4);
  user_t *VAR_12 = FUNC_7 (VAR_11->user_id);

  FUNC_1 (VAR_12);

  if (VAR_8) {
    return 0;
  }

  int VAR_13 = VAR_11->ad_id;
  if (!VAR_12 || VAR_13 <= 0 || VAR_13 >= VAR_5) {
    return -1;
  }

  struct advert *VAR_14 = FUNC_5 (VAR_13);
  if (!VAR_14) {
    if (!FUNC_2 (VAR_13)) {
      return -1;
    }
    VAR_14 = FUNC_6 (VAR_13, 1);
  }

  if (FUNC_10 (VAR_2, VAR_12->clicked_ads, VAR_13)) {

    return 0;
  }


  int VAR_15 = FUNC_12 (VAR_14);
  if (VAR_15 < 0) {
    return VAR_15;
  }

  int VAR_16;
  treeref_t VAR_17 = FUNC_10 (VAR_2, VAR_12->active_ads, VAR_13);
  if (VAR_17) {
    VAR_16 = ++FUNC_0 (VAR_2, VAR_17)->z;
  } else {
    VAR_17 = FUNC_10 (VAR_2, VAR_12->inactive_ads, VAR_13);
    if (VAR_17) {
      VAR_16 = ++FUNC_0 (VAR_2, VAR_17)->z;
    } else {
      VAR_17 = FUNC_13 (VAR_2);
      FUNC_0 (VAR_2, VAR_17)->x = VAR_13;
      VAR_16 = FUNC_0 (VAR_2, VAR_17)->z = 1;
      VAR_12->inactive_ads = FUNC_9 (VAR_2, VAR_12->inactive_ads, VAR_17);
      ++VAR_7;
    }
  }

  FUNC_8 (VAR_13, 1, 1);


  if (VAR_16 >= VAR_6) {
    VAR_16 = VAR_6 - 1;
  }

  long VAR_18 = VAR_16;
  if (FUNC_15 (!VAR_3.g[VAR_18].views)) {
    VAR_18 = 0;
  }
  if (FUNC_11 (VAR_3.g[VAR_18].views)) {
    double VAR_19 = (double) VAR_3.g[VAR_18].clicks / VAR_3.g[VAR_18].views;
    VAR_14->l_sump1 += VAR_19;
    VAR_14->g_sump1 += VAR_19;
    VAR_14->l_sump2 += VAR_19*VAR_19;
    VAR_14->g_sump2 += VAR_19*VAR_19;
    if (VAR_14->price > 0 && (VAR_14->flags & VAR_1)) {
      VAR_9 += VAR_19;
      VAR_10 += VAR_19*VAR_19;
    }
    FUNC_4 (VAR_14);
  }

  if (!(VAR_14->flags & VAR_0)) {
    VAR_14->flags |= VAR_1;
  }
  if ((VAR_14->flags & VAR_1) && VAR_14->price > 0) {
    ++VAR_3.l[0].views;
    ++VAR_3.g[0].views;
    FUNC_3 (VAR_16 > 0);
    ++VAR_3.l[VAR_16].views;
    ++VAR_3.g[VAR_16].views;
  }

  FUNC_14 (VAR_14, VAR_11->user_id);

  return 1;
}
