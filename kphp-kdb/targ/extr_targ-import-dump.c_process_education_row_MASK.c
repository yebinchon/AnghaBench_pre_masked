
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_education {scalar_t__ reserved; void* edu_status; void* edu_form; void* country; void* city; void* university; void* faculty; void* chair; void* grad_year; void* user_id; int type; } ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (void*) ;
 void* VAR_14 ;
 struct lev_education* FUNC_1 (int) ;

void FUNC_2 (void) {
  struct lev_education *VAR_15;
  VAR_14 = VAR_0[VAR_13];

  if (!FUNC_0(VAR_14)) {
    return;
  }



  VAR_15 = FUNC_1 (sizeof (*VAR_15));
  VAR_15->type = VAR_0[VAR_10] ? VAR_2 : VAR_1;
  VAR_15->user_id = VAR_0[VAR_13];
  VAR_15->grad_year = VAR_0[VAR_9];
  VAR_15->chair = VAR_0[VAR_4];
  VAR_15->faculty = VAR_0[VAR_7];
  VAR_15->university = VAR_0[VAR_12];
  VAR_15->city = VAR_0[VAR_5];
  VAR_15->country = VAR_0[VAR_6];
  VAR_15->edu_form = VAR_0[VAR_8];
  VAR_15->edu_status = VAR_0[VAR_11];
  VAR_15->reserved = 0;

  VAR_3++;

}
