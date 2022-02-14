
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* uplink; } ;
typedef TYPE_1__ utree_t ;
struct TYPE_18__ {int sex; int operator; int browser; int region; int height; int smoking; int alcohol; int ppriority; int iiothers; int hidden; int cvisited; int gcountry; int custom1; int custom2; int custom3; int custom4; int custom5; int custom6; int custom7; int custom8; int custom9; int custom10; int custom11; int custom12; int custom13; int custom14; int custom15; int timezone; int has_photo; int mstatus; int political; int uni_country; int uni_city; int bday_year; int bday_month; int bday_day; int * weights; int clicked_ads; int inactive_ads; int active_ads; scalar_t__ name; scalar_t__ proposal; scalar_t__ hometown; scalar_t__ religion; int uid; int proposal_hashes; int hometown_hashes; int religion_hashes; int name_hashes; TYPE_5__* right_rate; TYPE_5__* left_rate; TYPE_5__* uplink_rate; scalar_t__ online_prev; scalar_t__ online_next; int last_visited; } ;
typedef TYPE_2__ user_t ;
struct lev_delete_user {int user_id; } ;
struct TYPE_19__ {TYPE_1__* right; TYPE_1__* left; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_7 (int *) ;
 int VAR_43 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_1__* FUNC_18 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_19 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_20 (struct lev_delete_user *VAR_44) {
  int VAR_45 = VAR_44->user_id;
  int VAR_46 = FUNC_0 (VAR_45);
  if (VAR_46 < 0) {
    return 0;
  }
  user_t *VAR_47 = VAR_1[VAR_46];

  if (!VAR_47) {
    return 0;
  }

  --VAR_43;

  if (VAR_47->online_next) {
    FUNC_6 (FUNC_17 (VAR_47));
    FUNC_5 (FUNC_4 (VAR_47->last_visited), -1);
  }

  VAR_47->online_next = VAR_47->online_prev = 0;

  utree_t *VAR_48 = FUNC_18 (VAR_47->left_rate, VAR_47->right_rate);

  if (VAR_48) {
    VAR_48->uplink = VAR_47->uplink_rate;
  }

  if (VAR_47->uplink_rate->left == (utree_t *) VAR_47) {
    VAR_47->uplink_rate->left = VAR_48;
  } else {
    VAR_47->uplink_rate->right = VAR_48;
  }

  VAR_47->uplink_rate = VAR_47->left_rate = VAR_47->right_rate = 0;

  FUNC_9 (VAR_47);
  FUNC_15 (VAR_47);
  FUNC_8 (VAR_47);
  FUNC_14 (VAR_47);
  FUNC_16 (VAR_47);
  FUNC_11 (VAR_47);
  FUNC_13 (VAR_47);
  FUNC_10 (VAR_47->uid, VAR_39, VAR_47->sex);
  FUNC_10 (VAR_47->uid, VAR_34, VAR_47->operator);
  FUNC_10 (VAR_47->uid, VAR_8, VAR_47->browser);
  FUNC_10 (VAR_47->uid, VAR_38, VAR_47->region);
  FUNC_10 (VAR_47->uid, VAR_30, VAR_47->height);
  FUNC_10 (VAR_47->uid, VAR_40, VAR_47->smoking);
  FUNC_10 (VAR_47->uid, VAR_5, VAR_47->alcohol);
  FUNC_10 (VAR_47->uid, VAR_37, VAR_47->ppriority);
  FUNC_10 (VAR_47->uid, VAR_32, VAR_47->iiothers);
  FUNC_10 (VAR_47->uid, VAR_31, VAR_47->hidden);
  FUNC_10 (VAR_47->uid, VAR_27, VAR_47->cvisited);
  FUNC_10 (VAR_47->uid, VAR_28, VAR_47->gcountry);
  FUNC_10 (VAR_47->uid, VAR_12, VAR_47->custom1);
  FUNC_10 (VAR_47->uid, VAR_19, VAR_47->custom2);
  FUNC_10 (VAR_47->uid, VAR_20, VAR_47->custom3);
  FUNC_10 (VAR_47->uid, VAR_21, VAR_47->custom4);
  FUNC_10 (VAR_47->uid, VAR_22, VAR_47->custom5);
  FUNC_10 (VAR_47->uid, VAR_23, VAR_47->custom6);
  FUNC_10 (VAR_47->uid, VAR_24, VAR_47->custom7);
  FUNC_10 (VAR_47->uid, VAR_25, VAR_47->custom8);
  FUNC_10 (VAR_47->uid, VAR_26, VAR_47->custom9);
  FUNC_10 (VAR_47->uid, VAR_13, VAR_47->custom10);
  FUNC_10 (VAR_47->uid, VAR_14, VAR_47->custom11);
  FUNC_10 (VAR_47->uid, VAR_15, VAR_47->custom12);
  FUNC_10 (VAR_47->uid, VAR_16, VAR_47->custom13);
  FUNC_10 (VAR_47->uid, VAR_17, VAR_47->custom14);
  FUNC_10 (VAR_47->uid, VAR_18, VAR_47->custom15);
  FUNC_10 (VAR_47->uid, VAR_41, VAR_47->timezone);
  FUNC_10 (VAR_47->uid, VAR_29, (VAR_47->has_photo & 0x81) == 1);
  FUNC_10 (VAR_47->uid, VAR_42, (VAR_47->has_photo & 0x82) == 2);
  FUNC_10 (VAR_47->uid, VAR_35, (VAR_47->has_photo & 0x84) == 4);
  FUNC_10 (VAR_47->uid, VAR_33, VAR_47->mstatus);
  FUNC_10 (VAR_47->uid, VAR_36, VAR_47->political);
  FUNC_10 (VAR_47->uid, VAR_11, VAR_47->uni_country);
  FUNC_10 (VAR_47->uid, VAR_10, VAR_47->uni_city);
  FUNC_1 (VAR_47->uid, VAR_47->name_hashes);
  FUNC_1 (VAR_47->uid, VAR_47->religion_hashes);
  FUNC_1 (VAR_47->uid, VAR_47->hometown_hashes);
  FUNC_1 (VAR_47->uid, VAR_47->proposal_hashes);
  FUNC_10 (VAR_47->uid, VAR_9, VAR_47->bday_year);
  FUNC_10 (VAR_47->uid, VAR_7, VAR_47->bday_month);
  FUNC_10 (VAR_47->uid, VAR_6, VAR_47->bday_day);
  FUNC_2 (VAR_47->religion);
  FUNC_2 (VAR_47->name);
  FUNC_2 (VAR_47->hometown);
  FUNC_2 (VAR_47->proposal);
  VAR_47->name = 0;
  FUNC_12 (VAR_47, -1);

  VAR_2 -= FUNC_3 (VAR_0, VAR_47->active_ads);
  VAR_4 -= FUNC_3 (VAR_0, VAR_47->inactive_ads);
  VAR_3 -= FUNC_3 (VAR_0, VAR_47->clicked_ads);
  if (VAR_47->weights) {
    FUNC_7 (VAR_47->weights);
    VAR_47->weights = ((void*)0);
  }
  FUNC_19 (VAR_47, sizeof (user_t));
  VAR_1[VAR_46] = 0;

  return 1;
}
