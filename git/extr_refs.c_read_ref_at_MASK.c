
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct ref_store {int dummy; } ;
struct read_ref_at_cb {char const* refname; int cnt; char** msg; int* cutoff_tz; int* cutoff_cnt; scalar_t__ found_it; int reccnt; struct object_id* oid; int * cutoff_time; int at_time; } ;
struct object_id {int dummy; } ;
typedef int cb ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct read_ref_at_cb*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ref_store*,char const*,int ,struct read_ref_at_cb*) ;
 int FUNC_5 (struct ref_store*,char const*,int ,struct read_ref_at_cb*) ;

int FUNC_6(struct ref_store *VAR_3, const char *VAR_4,
  unsigned int VAR_5, timestamp_t VAR_6, int VAR_7,
  struct object_id *VAR_8, char **VAR_9,
  timestamp_t *VAR_10, int *VAR_11, int *VAR_12)
{
 struct read_ref_at_cb VAR_13;

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.refname = VAR_4;
 VAR_13.at_time = VAR_6;
 VAR_13.cnt = VAR_7;
 VAR_13.msg = VAR_9;
 VAR_13.cutoff_time = VAR_10;
 VAR_13.cutoff_tz = VAR_11;
 VAR_13.cutoff_cnt = VAR_12;
 VAR_13.oid = VAR_8;

 FUNC_5(VAR_3, VAR_4, VAR_1, &VAR_13);

 if (!VAR_13.reccnt) {
  if (VAR_5 & VAR_0)
   FUNC_2(128);
  else
   FUNC_1(FUNC_0("log for %s is empty"), VAR_4);
 }
 if (VAR_13.found_it)
  return 0;

 FUNC_4(VAR_3, VAR_4, VAR_2, &VAR_13);

 return 1;
}
