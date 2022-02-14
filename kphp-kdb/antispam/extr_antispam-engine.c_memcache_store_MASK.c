
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct connection {int Tmp; int In; } ;
struct TYPE_9__ {unsigned int member_0; int member_1; unsigned int member_2; unsigned int member_3; } ;
typedef TYPE_1__ request_t ;
typedef int request ;
struct TYPE_10__ {int flags; int uahash; int ip; int id; } ;
typedef TYPE_2__ antispam_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,char const*,int,int) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,int*,...) ;
 int FUNC_6 (char*,unsigned int,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*,char*,int const) ;
 scalar_t__ FUNC_10 (int) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ,TYPE_1__*,int) ;

int FUNC_12 (struct connection *VAR_10, int VAR_11, const char *VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16) {
  VAR_0;

  FUNC_3 (VAR_10);
  if (VAR_9 >= 2) {
    FUNC_2 (VAR_7, "memcache_store: key='%s', key_len=%d, value_len=%d\n", VAR_12, VAR_13, VAR_16);
  }

  if (FUNC_10 (VAR_16 >= VAR_1)) {
    FUNC_0 (VAR_5, -2);
  }

  const int VAR_17 = 7;


  if (VAR_13 >= VAR_17 && !FUNC_9 (VAR_12, "pattern", VAR_17)) {
    antispam_pattern_t VAR_18;
    int VAR_19 = 0;
    FUNC_7 (&VAR_10->In, VAR_8, VAR_16);

    if (FUNC_5 (VAR_12 + VAR_17, "%d,%u,%u%n,%hu%n", &VAR_18.id, &VAR_18.ip, &VAR_18.uahash, &VAR_19, &VAR_18.flags, &VAR_19) < 3
     || VAR_12[VAR_17 + VAR_19]) {
      FUNC_0 (VAR_3, 0);
    }
    int VAR_20 = FUNC_1 (VAR_18, FUNC_8 (VAR_8), VAR_8, (VAR_11 != VAR_4));
    FUNC_0 (VAR_3, VAR_20);
  }

  else if (VAR_13 >= VAR_17 && !FUNC_9 (VAR_12, "matches", VAR_17)) {
    int VAR_21 = 0;
    unsigned int VAR_22, VAR_23, VAR_24;

    FUNC_7 (&VAR_10->In, VAR_8, VAR_16);
    if (FUNC_5 (VAR_12 + VAR_17, "%u,%u,%u%n", &VAR_22, &VAR_23, &VAR_24, &VAR_21) != 3 || VAR_12[VAR_17 + VAR_21]) {
      FUNC_0 (VAR_6, 0);
    }

    bool VAR_25 = VAR_2;
    request_t VAR_26 = {VAR_24, VAR_16, VAR_22, VAR_23};
    FUNC_4 (VAR_10);
    if (VAR_9 >= 3) {
      FUNC_6 ("STORED: random_tag = %u, size = %d, ip = %u, uahash = %u\n"
                   "expect '$2get matches$6%u$^' command\n", VAR_24, VAR_16, VAR_22, VAR_23, VAR_24);
    }
    VAR_25 &= (FUNC_11 (VAR_10->Tmp, &VAR_26, sizeof (VAR_26)) == sizeof (VAR_26));
    VAR_25 &= (FUNC_11 (VAR_10->Tmp, VAR_8, VAR_16) == VAR_16);
    FUNC_0 (VAR_6, VAR_25);
  }

  FUNC_0 (VAR_5, -2);
}
