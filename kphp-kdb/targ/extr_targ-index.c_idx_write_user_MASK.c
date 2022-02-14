
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int user_id; int rate; int last_visited; int uni_city; int region; int clicked_ads; int inactive_ads; int active_ads; TYPE_2__* langs; TYPE_1__* grp; struct school* mil; struct school* inter; struct school* addr; struct school* work; struct school* sch; struct school* edu; int proposal; int hometown; int religion; int name; int proposal_hashes; int hometown_hashes; int religion_hashes; int inter_hashes; int name_hashes; int custom_fields; int gcountry; int hidden; int cvisited; int iiothers; int ppriority; int alcohol; int smoking; int height; int timezone; int operator; int browser; int has_photo; int privacy; int cute; int uni_country; int mstatus; int sex; int political; int bday_year; int bday_month; int bday_day; int user_group_types; } ;
typedef TYPE_3__ user_t ;
struct school {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct school* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct military {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct military* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct interest {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct interest* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct education {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct education* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct company {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct company* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct address {int grad_year; int chair; int faculty; int university; int city; int school; int company; int district; int station; int street; int unit_id; int finish; int start; struct address* next; int text; int flags; int type; int name; int house; int name_hashes; int house_hashes; int atype; int country; int job; int company_name; int job_hashes; int spec; int spec_hashes; int sch_type; int sch_class; int grad; int primary; int edu_status; int edu_form; } ;
struct TYPE_7__ {int cur_langs; int L; } ;
struct TYPE_6__ {int cur_groups; int G; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct school*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11 (user_t *VAR_6) {
  FUNC_0 (VAR_6);

  FUNC_7 (VAR_1);
  FUNC_7 (VAR_6->user_id);
  FUNC_7 (FUNC_2 (VAR_0, VAR_6->active_ads, VAR_3));
  FUNC_7 (FUNC_2 (VAR_0, VAR_6->inactive_ads, VAR_2));
  FUNC_7 (FUNC_2 (VAR_0, VAR_6->clicked_ads, VAR_3));
  FUNC_7 (VAR_6->rate >> 8);
  FUNC_7 (VAR_6->last_visited);
  FUNC_7 (VAR_6->uni_city);
  FUNC_7 (VAR_6->region);
  FUNC_3 (VAR_6->user_group_types, 16);
  FUNC_5 (VAR_6->bday_day);
  FUNC_5 (VAR_6->bday_month);
  FUNC_8 (VAR_6->bday_year);
  FUNC_5 (VAR_6->political);
  FUNC_5 (VAR_6->sex);
  FUNC_5 (VAR_6->mstatus);
  FUNC_5 (VAR_6->uni_country);
  FUNC_5 (VAR_6->cute);
  FUNC_5 (VAR_6->privacy);
  FUNC_5 (VAR_6->has_photo);
  FUNC_5 (VAR_6->browser);
  FUNC_8 (VAR_6->operator);
  FUNC_8 (VAR_6->timezone);
  FUNC_5 (VAR_6->height);
  FUNC_5 (VAR_6->smoking);
  FUNC_5 (VAR_6->alcohol);
  FUNC_5 (VAR_6->ppriority);
  FUNC_5 (VAR_6->iiothers);
  FUNC_5 (VAR_6->cvisited);
  FUNC_5 (VAR_6->hidden);
  FUNC_5 (VAR_6->gcountry);
  FUNC_3 (VAR_6->custom_fields, 15);

  FUNC_10 (FUNC_1 (VAR_6->edu));
  FUNC_10 (FUNC_1 (VAR_6->sch));
  FUNC_10 (FUNC_1 (VAR_6->work));
  FUNC_10 (FUNC_1 (VAR_6->addr));
  FUNC_10 (FUNC_1 (VAR_6->inter));
  FUNC_10 (FUNC_1 (VAR_6->mil));
  FUNC_10 (VAR_6->grp ? VAR_6->grp->cur_groups : 0);
  FUNC_10 (VAR_6->langs ? VAR_6->langs->cur_langs : 0);

  FUNC_6 (VAR_6->name_hashes);
  FUNC_6 (VAR_6->inter_hashes);
  FUNC_6 (VAR_6->religion_hashes);
  FUNC_6 (VAR_6->hometown_hashes);
  FUNC_6 (VAR_6->proposal_hashes);

  FUNC_9 (VAR_6->name);
  FUNC_9 (VAR_6->religion);
  FUNC_9 (VAR_6->hometown);
  FUNC_9 (VAR_6->proposal);

  struct education *VAR_7;
  for (VAR_7 = VAR_6->edu; VAR_7; VAR_7 = VAR_7->next) {
    FUNC_7 (VAR_7->grad_year);
    FUNC_7 (VAR_7->chair);
    FUNC_7 (VAR_7->faculty);
    FUNC_7 (VAR_7->university);
    FUNC_7 (VAR_7->city);
    FUNC_5 (VAR_7->country);
    FUNC_5 (VAR_7->edu_form);
    FUNC_5 (VAR_7->edu_status);
    FUNC_5 (VAR_7->primary);
  }

  struct school *VAR_8;
  for (VAR_8 = VAR_6->sch; VAR_8; VAR_8 = VAR_8->next) {
    FUNC_7 (VAR_8->city);
    FUNC_7 (VAR_8->school);
    FUNC_8 (VAR_8->start);
    FUNC_8 (VAR_8->finish);
    FUNC_8 (VAR_8->grad);
    FUNC_5 (VAR_8->country);
    FUNC_5 (VAR_8->sch_class);
    FUNC_5 (VAR_8->sch_type);
    FUNC_6 (VAR_8->spec_hashes);
    FUNC_9 (VAR_8->spec);
  }

  struct company *VAR_9;
  for (VAR_9 = VAR_6->work; VAR_9; VAR_9 = VAR_9->next) {
    FUNC_7 (VAR_9->city);
    FUNC_7 (VAR_9->company);
    FUNC_8 (VAR_9->start);
    FUNC_8 (VAR_9->finish);
    FUNC_5 (VAR_9->country);
    FUNC_6 (VAR_9->name_hashes);
    FUNC_6 (VAR_9->job_hashes);
    FUNC_9 (VAR_9->company_name);
    FUNC_9 (VAR_9->job);
  }

  struct address *VAR_10;
  for (VAR_10 = VAR_6->addr; VAR_10; VAR_10 = VAR_10->next) {
    FUNC_7 (VAR_10->city);
    FUNC_7 (VAR_10->district);
    FUNC_7 (VAR_10->station);
    FUNC_7 (VAR_10->street);
    FUNC_5 (VAR_10->country);
    FUNC_5 (VAR_10->atype);
    FUNC_6 (VAR_10->house_hashes);
    FUNC_6 (VAR_10->name_hashes);
    FUNC_9 (VAR_10->house);
    FUNC_9 (VAR_10->name);
  }

  struct interest *VAR_11;
  for (VAR_11 = VAR_6->inter; VAR_11; VAR_11 = VAR_11->next) {
    FUNC_5 (VAR_11->type);
    FUNC_5 (VAR_11->flags);
    FUNC_9 (VAR_11->text);
  }

  FUNC_4 (4);

  struct military *VAR_12;
  for (VAR_12 = VAR_6->mil; VAR_12; VAR_12 = VAR_12->next) {
    FUNC_7 (VAR_12->unit_id);
    FUNC_8 (VAR_12->start);
    FUNC_8 (VAR_12->finish);
  }

  if (VAR_6->grp) {
    FUNC_3 (VAR_6->grp->G, VAR_6->grp->cur_groups * 4);
  }

  if (VAR_6->langs) {
    FUNC_3 (VAR_6->langs->L, VAR_6->langs->cur_langs * 2);
  }

  FUNC_4 (4);

  FUNC_2 (VAR_0, VAR_6->active_ads, VAR_4);
  FUNC_2 (VAR_0, VAR_6->inactive_ads, VAR_5);
  FUNC_2 (VAR_0, VAR_6->clicked_ads, VAR_4);
}
