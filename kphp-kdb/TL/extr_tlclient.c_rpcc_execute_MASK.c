
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tl_scheme_object {int dummy; } ;
struct connection {int In; } ;
struct TYPE_7__ {int tabsize; int indentation; } ;
struct TYPE_6__ {char* buff; } ;


 long long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 char* FUNC_4 (struct tl_scheme_object*) ;
 int FUNC_5 (char*,long long,long long) ;
 int FUNC_6 (char) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (long long*,...) ;
 TYPE_5__ VAR_8 ;
 int FUNC_10 (int *,long long*,int) ;
 long long VAR_9 ;
 int FUNC_11 (int) ;
 int * VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int*,int,int,int ,struct tl_scheme_object**) ;
 int FUNC_14 (struct tl_scheme_object*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,TYPE_1__*,int*,int,int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_18 (int *,int,int**,int*) ;
 TYPE_1__ VAR_12 ;

int FUNC_19 (struct connection *VAR_13, int VAR_14, int VAR_15) {
  if (VAR_15 > VAR_1) {
    return VAR_4;
  }
  if (VAR_14 == VAR_3) {
    long long VAR_16;
    FUNC_0 (FUNC_10 (&VAR_13->In, VAR_0, VAR_15) == VAR_15);
    FUNC_9 (&VAR_16, &VAR_0[3], 8);
    if (VAR_16 != VAR_9) {
      FUNC_5 ("RPC_REQ_RESULT: req_id = %lld, expected req_id = %lld\n", VAR_16, VAR_9);
      return 0;
    } else {
      int *VAR_17;
      int VAR_18;
      FUNC_16 (&VAR_12);
      FUNC_12 (&VAR_6);
      if (FUNC_18 (&VAR_6, VAR_15, &VAR_17, &VAR_18) < 0) {
        FUNC_7 ();
        FUNC_8 ("unpack packet fail\n");
      } else {
        if (VAR_10) {
          struct tl_scheme_object *VAR_19 = ((void*)0);
          FUNC_12 (&VAR_6);
          int VAR_20 = FUNC_13 (&VAR_6, VAR_17, VAR_18, 1 << VAR_5, VAR_11, &VAR_19);
          if (VAR_20 >= 0 && VAR_19 != ((void*)0)) {

            char *VAR_21 = FUNC_4 (VAR_19);
            if (VAR_21) {
              FUNC_3 (VAR_10, "%s", VAR_21);
            }
            FUNC_14 (VAR_19);
          }
          FUNC_2 (VAR_10);
          VAR_10 = ((void*)0);
        } else {
          if (VAR_18 && VAR_17[0] == VAR_2) {
            int VAR_22 = 4 * (VAR_18 - 1);
            FUNC_9 (VAR_0+5, VAR_17+1, VAR_22);
            FUNC_11 (VAR_22 + 24);
            VAR_7 = 1;
            return 0;
          }
          int VAR_23 = FUNC_17 (&VAR_6, &VAR_12, VAR_17, VAR_18, VAR_11, VAR_8.indentation);
          if (VAR_23 < 0) {
            FUNC_7 ();
          } else {
            if (VAR_23 != VAR_18) {
              FUNC_5 ("Warning: unserialize %d ints of result, but result contains %d ints.\n", VAR_23, VAR_18);
            }
            FUNC_15 (&VAR_12, 0);
            char *VAR_24 = VAR_12.buff;
            while (*VAR_24) {
              if (*VAR_24 == '\t') {
                int VAR_25;
                for (VAR_25 = 0; VAR_25 < VAR_8.tabsize; VAR_25++) {
                  FUNC_6 (' ');
                }
              } else {
                FUNC_6 (*VAR_24);
              }
              VAR_24++;
            }
            FUNC_6 ('\n');
          }
        }
      }
      FUNC_1 (&VAR_11);
      VAR_7 = 1;
    }
    return 0;
  } if (VAR_14 == VAR_2) {
    long long VAR_26;
    FUNC_0 (FUNC_10 (&VAR_13->In, VAR_0, VAR_15) == VAR_15);
    FUNC_9 (&VAR_26, &VAR_0[3], 8);
    if (VAR_26 != VAR_9) {
      FUNC_5 ("RPC_REQ_ERROR: req_id = %lld, expected req_id = %lld\n", VAR_26, VAR_9);
      return 0;
    } else {
      FUNC_11 (VAR_15);
    }
    FUNC_1 (&VAR_11);
    VAR_7 = 1;
    return 0;
  } else {
    return VAR_4;
  }
}
