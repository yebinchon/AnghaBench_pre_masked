
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intree_node {int x; int z; } ;
struct advert {int flags; scalar_t__ recent_views; scalar_t__ recent_views_limit; int category; scalar_t__ price; double expected_gain; int subcategory; double lambda; double delta; scalar_t__ group; } ;
struct TYPE_9__ {TYPE_1__* g; } ;
struct TYPE_8__ {double expected_gain; } ;
struct TYPE_7__ {int weights; } ;
struct TYPE_6__ {double views; scalar_t__ clicks; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 double FUNC_0 () ;
 struct advert* FUNC_1 (int) ;
 int FUNC_2 (double,struct advert*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 double FUNC_4 (double) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7 (struct intree_node *VAR_12) {
  int VAR_13 = VAR_12->x;
  if (VAR_13 == VAR_7) {
    return 1;
  }

  int VAR_14 = VAR_12->z;
  struct advert *VAR_15 = FUNC_1 (VAR_13);
  if ((VAR_15->flags ^ VAR_11) & VAR_5) {
    return 1;
  }

  if (VAR_9 && VAR_15->recent_views >= VAR_15->recent_views_limit) {
    return 1;
  }

  if (VAR_15->group && FUNC_3 (VAR_10, VAR_15->group)) {
    return 1;
  }

  long long VAR_16 = (1LL << (VAR_15->category > 63 ? 0 : VAR_15->category));
  if (! (VAR_6 & VAR_16)) {
    return 1;
  }

  if (VAR_15->price <= 0) {
    if (!(VAR_15->flags & VAR_0) || VAR_14 < 100) {
      FUNC_2 (VAR_15->expected_gain, VAR_15, VAR_14);
    }
    return 1;
  }
  long VAR_17 = VAR_14 + 1;
  if (VAR_17 >= VAR_4) {
    VAR_17 = VAR_4 - 1;
  }

  double VAR_18 = 0;
  if (VAR_15->category) {
    VAR_18 += FUNC_5 (VAR_10->weights, VAR_15->category);
  }
  if (VAR_15->subcategory) {
    VAR_18 += FUNC_5 (VAR_10->weights, VAR_15->subcategory);
  }

  if (VAR_18) {
    VAR_18 *= FUNC_4 (2.0);
    VAR_18 = ((((((1.0 / 24) * VAR_18) + (1.0 / 6)) * VAR_18) + (1.0 / 2)) * VAR_18 + 1) * VAR_18 + 1;
  } else {
    VAR_18 = 1;
  }

  if (FUNC_6 (!VAR_1.g[VAR_17].views)) {
    VAR_17 = 0;
    if (FUNC_6 (!VAR_1.g[0].views)) {
      FUNC_2 (VAR_15->expected_gain * VAR_18, VAR_15, VAR_14);
      return 1;
    }
  }
  double VAR_19 = (double) VAR_1.g[VAR_17].clicks / VAR_1.g[VAR_17].views;
  double VAR_20 = VAR_15->lambda * VAR_19;
  double VAR_21 = VAR_15->delta * VAR_19;
  if (VAR_3 == VAR_8 && (VAR_20 + 2 * VAR_21) * VAR_18 <= VAR_2[1].expected_gain) {
    return 1;
  }
  double VAR_22 = (VAR_20 + VAR_21 * (FUNC_0() + FUNC_0() - FUNC_0() - FUNC_0())) * VAR_18;
  FUNC_2 (VAR_22, VAR_15, VAR_14);
  return 1;
}
