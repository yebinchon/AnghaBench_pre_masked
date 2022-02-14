
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memcache_server_functions {TYPE_2__* info; } ;
struct gather_data {int ready_num; int wait_num; double start_time; } ;
struct connection {int In; } ;
struct conn_query {scalar_t__ req_generation; int extra; TYPE_1__* requester; } ;
struct TYPE_4__ {int mc_proxy_inbound; } ;
struct TYPE_3__ {scalar_t__ generation; int * extra; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gather_data* FUNC_0 (struct conn_query*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct conn_query*,int*,int) ;
 char* VAR_3 ;
 int* VAR_4 ;
 int FUNC_3 (struct conn_query*) ;
 int FUNC_4 (struct conn_query*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 struct conn_query* FUNC_7 (struct connection*,int*,int) ;
 double FUNC_8 (int ) ;
 int FUNC_9 (struct conn_query*,int) ;
 int FUNC_10 (int *,int*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_11 (struct connection *VAR_7, int VAR_8) {
  FUNC_1 (VAR_8 <= VAR_2);

  FUNC_1 (FUNC_10 (&VAR_7->In, VAR_4, VAR_8) == VAR_8);
  if (VAR_6 >= 4) {
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
      FUNC_5 (VAR_5, "%c[%d]", VAR_4[VAR_9], VAR_4[VAR_9]);
    FUNC_5 (VAR_5, "\n");
  }
  FUNC_6 (&VAR_7->In);

  int VAR_10 = 0;
  while (VAR_10 < VAR_8 && VAR_4[VAR_10] != 13) {
    VAR_10++;
  }
  if (VAR_10 >= VAR_8-1) {
    FUNC_5 (VAR_5, "data_shift = %d\n", VAR_10);
    return -1;
  }
  VAR_10 += 2;
  if (VAR_4[VAR_10-1] != 10) {
    FUNC_5 (VAR_5, "data_buff[] = %d\n", VAR_4[VAR_10-1]);
    return -1;
  }

  struct conn_query *VAR_11 = FUNC_7 (VAR_7, VAR_4, VAR_8);

  if (!VAR_11) {
    FUNC_5 (VAR_5, "Error in search_merge: cannot find query for answer. Dropping answer.\n");
    return 0;
  }

  if (!VAR_11->requester || VAR_11->req_generation != VAR_11->requester->generation) {
    FUNC_5 (VAR_5, "Error in search_merge: generations do not match. Dropping answer. (key = %s).\n", VAR_3);
    FUNC_9 (VAR_11, 0);
    return 0;
  }

  struct conn_query *VAR_12 = (struct conn_query*)VAR_11->extra;
  if (!VAR_12) {
    FUNC_5 (VAR_5, "Error in search_merge: no parent query. Dropping answer. (key = %s).\n", VAR_3);
    FUNC_9 (VAR_11, 0);
    return 0;
  }
  FUNC_1 (VAR_11->requester == VAR_12->requester);
  FUNC_1 (VAR_12->extra);


  VAR_0 = ((struct memcache_server_functions *) (VAR_12->requester)->extra)->info;
  FUNC_1 (VAR_0 && &VAR_0->mc_proxy_inbound == (VAR_12->requester)->extra);

  FUNC_2 (VAR_11, VAR_4 + VAR_10, VAR_8 - VAR_10);
  FUNC_9 (VAR_11, 1);

  if (VAR_6 >= 4) {
    FUNC_5 (VAR_5, "end of search_merge\n");
  }

  struct gather_data *VAR_13 = FUNC_0(VAR_12);
  if (VAR_6 >= 2) {
   FUNC_5 (VAR_5, "got answer %d of %d in %.08f seconds\n", VAR_13->ready_num, VAR_13->wait_num, FUNC_8(VAR_1) - VAR_13->start_time);
  }

  if (VAR_13->wait_num == VAR_13->ready_num) {
    FUNC_4 (VAR_12);
    if (VAR_6 >= 4) {
      FUNC_5 (VAR_5, "All answers gathered. Deleting master query.\n");
    }

    FUNC_3 (VAR_12);
  }

  return 1;
}
