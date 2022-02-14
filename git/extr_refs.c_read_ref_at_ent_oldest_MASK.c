
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct read_ref_at_cb {int* cutoff_tz; int oid; int reccnt; int * cutoff_cnt; int * cutoff_time; int * msg; } ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct object_id*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct object_id *VAR_0, struct object_id *VAR_1,
      const char *VAR_2, timestamp_t VAR_3,
      int VAR_4, const char *VAR_5, void *VAR_6)
{
 struct read_ref_at_cb *VAR_7 = VAR_6;

 if (VAR_7->msg)
  *VAR_7->msg = FUNC_2(VAR_5);
 if (VAR_7->cutoff_time)
  *VAR_7->cutoff_time = VAR_3;
 if (VAR_7->cutoff_tz)
  *VAR_7->cutoff_tz = VAR_4;
 if (VAR_7->cutoff_cnt)
  *VAR_7->cutoff_cnt = VAR_7->reccnt;
 FUNC_1(VAR_7->oid, VAR_0);
 if (FUNC_0(VAR_7->oid))
  FUNC_1(VAR_7->oid, VAR_1);

 return 1;
}
