
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int fd; int Out; int query_start_time; } ;
struct conn_target {int dummy; } ;
struct conn_query {int custom_type; } ;
struct TYPE_6__ {int tot_buckets; int step; int cluster_mode; int a_req; int a_sbytes; int t_req; int t_sbytes; TYPE_1__* listening_connection; int set_timeout; struct conn_target** buckets; } ;
struct TYPE_5__ {int query_type; } ;
struct TYPE_4__ {int generation; int query_start_time; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 size_t* VAR_3 ;
 int FUNC_1 (int) ;
 struct conn_query* FUNC_2 (struct connection*,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int ,char*,...) ;
 struct connection* FUNC_5 (struct conn_target*) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_6 ;
 int FUNC_7 (int*,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (int *,...) ;

int FUNC_9 (char *VAR_8, int VAR_9, int VAR_10, int *VAR_11, struct connection *VAR_12) {
  int VAR_13, VAR_14 = VAR_0->tot_buckets, VAR_15, VAR_16 = 0, VAR_17, VAR_18 = VAR_0->step > 0 ? VAR_0->step : 1, VAR_19 = 0, VAR_20 = 0;
  struct connection *VAR_21;
  struct conn_query *VAR_22;
  struct conn_target *VAR_23;

  if (VAR_7 > 0) {
    FUNC_4 (VAR_6, "in text_forward_query(%s, %d, %d; %d %d %d)\n", VAR_8, VAR_12->fd, VAR_10, VAR_11[0], VAR_11[1], VAR_11[2]);
  }

  ++VAR_5;

  if (VAR_10 <= 0 || VAR_10 >= VAR_2 || !VAR_14 || (VAR_0->cluster_mode & 255) != VAR_1) {
    return 0;
  }
  FUNC_1 (VAR_11 && VAR_8);
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
    VAR_3[VAR_13] = (VAR_11[VAR_13] / VAR_18) % VAR_14;
  }

  VAR_0->listening_connection->query_start_time = VAR_12->query_start_time;

  FUNC_7 (VAR_11, 0, VAR_10 - 1);
  VAR_3[VAR_10] = VAR_14;
  VAR_15 = 0;
  for (VAR_13 = 1; VAR_13 <= VAR_10; VAR_13++) {
    if (VAR_3[VAR_13] != VAR_3[VAR_13 - 1]) {
      if (VAR_3[VAR_15] >= 0) {
        VAR_11[VAR_15 - 1] = VAR_13 - VAR_15;
        VAR_23 = VAR_0->buckets[VAR_3[VAR_15]];
        VAR_21 = FUNC_5 (VAR_23);
        if (VAR_21) {
          VAR_22 = FUNC_2 (VAR_21, VAR_0->listening_connection, VAR_0->set_timeout);
          VAR_22->custom_type = FUNC_0(VAR_12)->query_type | 0x2000;

          if (VAR_7 > 1) {
            FUNC_4 (VAR_6, "Forwarded online friends list (key = %s) to bucket %zu:", VAR_8, VAR_3[VAR_15]);
            for (VAR_17 = VAR_15 - 1; VAR_17 < VAR_13; VAR_17++) {
              FUNC_4 (VAR_6, " %d", VAR_11[VAR_17]);
            }
            FUNC_4 (VAR_6, "\n");
          }

          static char VAR_24[32];
          int VAR_25 = FUNC_6 (VAR_24, " 0 0 %d\r\n", (VAR_13 - VAR_15 + 1) * 4);

          FUNC_8 (&VAR_21->Out, "set ", 4);
          FUNC_8 (&VAR_21->Out, VAR_8, VAR_9);
          FUNC_8 (&VAR_21->Out, VAR_24, VAR_25);
          FUNC_8 (&VAR_21->Out, VAR_11 + (VAR_15 - 1), (VAR_13 - VAR_15 + 1) * 4);
          FUNC_8 (&VAR_21->Out, "\r\n", 2);

   VAR_19++;
   VAR_20 += 4 + VAR_9 + VAR_25 + (VAR_13 - VAR_15 + 1) * 4 + 2;

          VAR_16 += VAR_13 - VAR_15;

          FUNC_3 (VAR_21);
        }
      }
      VAR_15 = VAR_13;
    }
  }

  if (VAR_16) {
    VAR_0->a_req += VAR_19;
    VAR_0->a_sbytes += VAR_20;
    VAR_0->t_req += VAR_19;
    VAR_0->t_sbytes += VAR_20;
    VAR_4 += VAR_16;
    VAR_0->listening_connection->generation++;
  }

  return VAR_16;
}
