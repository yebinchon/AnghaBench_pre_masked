
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int root; } ;
typedef TYPE_1__ transaction_t ;
struct pair_hostid_result {int result; size_t host_id; } ;
typedef int buf ;
struct TYPE_5__ {char* hostname; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (char const* const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pair_hostid_result*,int*,unsigned int,int) ;
 int FUNC_3 (struct pair_hostid_result*) ;
 struct pair_hostid_result* FUNC_4 (int*,unsigned long long,int ) ;
 TYPE_1__* FUNC_5 (unsigned long long,int,int ) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*,char*,char*,int) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int,char*,...) ;

char *FUNC_12 (unsigned long long VAR_1, int VAR_2, const char *const VAR_3) {
  char VAR_4[64];
  int VAR_5 = FUNC_0 (VAR_3);
  if (VAR_5 < 0) {
    FUNC_11 (3, "get_hosts_list_by_status: unknown status \"%s\"\n", VAR_3);
    return ((void*)0);
  }
  transaction_t *VAR_6 = FUNC_5 (VAR_1, VAR_2, 0);
  if (VAR_6 == ((void*)0)) {
    FUNC_11 (3, "get_hosts_list_by_status: get_transaction_f (0x%llx, %d) returns NULL.\n", VAR_1, VAR_2);
    return ((void*)0);
  }
  int VAR_7;
  struct pair_hostid_result *VAR_8 = FUNC_4 (&VAR_7, VAR_1, VAR_6->root);
  if (VAR_8 == ((void*)0)) {
    FUNC_11 (3, "get_hosts_list_by_status: get_pairs_hostid_result returns NULL.\n");
    return ((void*)0);
  }

  FUNC_2 (VAR_8, &VAR_7, ((unsigned) VAR_5) << 28, 0xf0000000U);

  if (VAR_7 == 0) {
    FUNC_3 (VAR_8);
    return FUNC_9 ("");
  }

  int VAR_9, VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    VAR_8[VAR_9].result &= 0x0fffffffU;
  }

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    int VAR_11 = FUNC_7 (VAR_4, sizeof (VAR_4), "0x%04x", VAR_8[VAR_9].result);
    FUNC_1 (VAR_11 < (int) sizeof (VAR_4));
    VAR_10 += VAR_11 + FUNC_10 (VAR_0[VAR_8[VAR_9].host_id]->hostname) + 2;
  }
  char *VAR_12 = FUNC_6 (VAR_10), *VAR_13 = VAR_12;
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    if (VAR_9 > 0) {
      *VAR_13++ = ',';
    }
    VAR_13 += FUNC_8 (VAR_13, "%s,0x%04x", VAR_0[VAR_8[VAR_9].host_id]->hostname, VAR_8[VAR_9].result);
  }
  FUNC_1 (VAR_13 == (VAR_12 + (VAR_10 - 1)));
  FUNC_3 (VAR_8);
  return VAR_12;
}
