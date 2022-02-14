
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {int extra_int; int extra_int2; int extra_int3; int query_flags; int * extra; } ;
struct connection {scalar_t__ status; int parse_state; } ;
typedef int metafile_t ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct connection*,int *,long long,int) ;
 int FUNC_4 (long long*,int*,int) ;
 int FUNC_5 (int,char*,struct connection*,scalar_t__) ;
 int FUNC_6 (struct connection*,int) ;

int FUNC_7 (struct connection *VAR_4) {
  FUNC_5 (3, "hts_wakeup (%p, c->status = %d)\n", VAR_4, VAR_4->status);
  struct hts_data *VAR_5 = FUNC_0(VAR_4);
  int VAR_6[2];
  VAR_6[0] = VAR_5->extra_int;
  VAR_6[1] = VAR_5->extra_int2;
  long long VAR_7;
  FUNC_4 (&VAR_7, &VAR_6[0], 8);
  int VAR_8 = VAR_5->extra_int3;

  FUNC_1 (VAR_4->status == VAR_1 || VAR_4->status == VAR_2);
  VAR_4->status = VAR_1;
  FUNC_2 (VAR_4);

  if (!(VAR_5->query_flags & VAR_0)) {
    VAR_4->status = VAR_3;
    VAR_4->parse_state = -1;
  }
  metafile_t *VAR_9 = VAR_5->extra;
  int VAR_10 = FUNC_3 (VAR_4, VAR_9, VAR_7, VAR_8);
  if (VAR_10 < 0) {
    FUNC_6 (VAR_4, -VAR_10);
  }
  return 0;
}
