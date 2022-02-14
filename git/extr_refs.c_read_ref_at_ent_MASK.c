
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct object_id {int dummy; } ;
struct read_ref_at_cb {int tz; scalar_t__ date; scalar_t__ at_time; scalar_t__ cnt; int* cutoff_tz; int found_it; struct object_id noid; struct object_id ooid; int refname; struct object_id* oid; scalar_t__ reccnt; scalar_t__* cutoff_cnt; scalar_t__* cutoff_time; int * msg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (struct object_id*,struct object_id*) ;
 int FUNC_4 (struct object_id*,struct object_id*) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct object_id *VAR_1, struct object_id *VAR_2,
  const char *VAR_3, timestamp_t VAR_4, int VAR_5,
  const char *VAR_6, void *VAR_7)
{
 struct read_ref_at_cb *VAR_8 = VAR_7;

 VAR_8->reccnt++;
 VAR_8->tz = VAR_5;
 VAR_8->date = VAR_4;

 if (VAR_4 <= VAR_8->at_time || VAR_8->cnt == 0) {
  if (VAR_8->msg)
   *VAR_8->msg = FUNC_7(VAR_6);
  if (VAR_8->cutoff_time)
   *VAR_8->cutoff_time = VAR_4;
  if (VAR_8->cutoff_tz)
   *VAR_8->cutoff_tz = VAR_5;
  if (VAR_8->cutoff_cnt)
   *VAR_8->cutoff_cnt = VAR_8->reccnt - 1;




  if (!FUNC_2(&VAR_8->ooid)) {
   FUNC_3(VAR_8->oid, VAR_2);
   if (!FUNC_4(&VAR_8->ooid, VAR_2))
    FUNC_6(FUNC_1("log for ref %s has gap after %s"),
     VAR_8->refname, FUNC_5(VAR_8->date, VAR_8->tz, FUNC_0(VAR_0)));
  }
  else if (VAR_8->date == VAR_8->at_time)
   FUNC_3(VAR_8->oid, VAR_2);
  else if (!FUNC_4(VAR_2, VAR_8->oid))
   FUNC_6(FUNC_1("log for ref %s unexpectedly ended on %s"),
    VAR_8->refname, FUNC_5(VAR_8->date, VAR_8->tz,
             FUNC_0(VAR_0)));
  FUNC_3(&VAR_8->ooid, VAR_1);
  FUNC_3(&VAR_8->noid, VAR_2);
  VAR_8->found_it = 1;
  return 1;
 }
 FUNC_3(&VAR_8->ooid, VAR_1);
 FUNC_3(&VAR_8->noid, VAR_2);
 if (VAR_8->cnt > 0)
  VAR_8->cnt--;
 return 0;
}
