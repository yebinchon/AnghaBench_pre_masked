
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int In; } ;
struct TYPE_2__ {int q_id; int w_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char const*,int,char**,int*) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*,int,int) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*,int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,char*) ;

int FUNC_9 (struct connection *VAR_9, int VAR_10, const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15) {
  VAR_0;

  if (VAR_5 > 1) {
    FUNC_3 (VAR_8, "memcache_store: key='%s', key_len=%d, value_len=%d, flags = %d, exp_time = %d\n", VAR_11, VAR_12, VAR_15, VAR_13, VAR_14);
  }

  if (VAR_15 < VAR_1) {
    char *VAR_16;
    int VAR_17;

    FUNC_2 (VAR_11, VAR_12, &VAR_16, &VAR_17);

    if (!FUNC_8 (VAR_16, "entry")) {
      FUNC_5 (&VAR_9->In, VAR_7, VAR_15);
      VAR_7[VAR_15] = 0;

      if (VAR_5 > 1) {
        FUNC_3 (VAR_8, "entry: %s\n", VAR_7);
      }
      char *VAR_18 = FUNC_4 (VAR_7);
      if (VAR_3) {

        int VAR_19, VAR_20 = 0;
        char *VAR_21 = VAR_4;

        for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
          if (VAR_20) {
            *VAR_21++ = ',';
          } else {
            VAR_20 = 1;
          }

          VAR_21 += FUNC_7 (VAR_21, "%lld", VAR_2[VAR_19].w_id);

          if (VAR_5 > 1) {
            FUNC_3 (VAR_8, "%d:%d\n", VAR_2[VAR_19].q_id, VAR_2[VAR_19].w_id);
          }
          if (VAR_19 + 1 == VAR_3 || VAR_2[VAR_19 + 1].q_id != VAR_2[VAR_19].q_id) {
            *VAR_21++ = ';';
            *VAR_21 = 0;


            FUNC_1 (VAR_21, VAR_18);
            FUNC_6 (VAR_4, VAR_21 - VAR_4, VAR_2[VAR_19].q_id);
            VAR_21 = VAR_4;
            VAR_20 = 0;
          }
        }
      }

      FUNC_0(VAR_6, 1);
    }
  }

  FUNC_0(VAR_6, -2);
}
