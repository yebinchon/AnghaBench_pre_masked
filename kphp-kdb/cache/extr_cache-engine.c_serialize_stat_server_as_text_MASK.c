
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; int i; } ;
typedef int record ;
struct TYPE_9__ {double access_queries; int files; int files_bytes; int id; } ;
typedef TYPE_2__ cache_stat_server_t ;
struct TYPE_10__ {int pos; int size; int buff; } ;
typedef TYPE_3__ cache_buffer_t ;
struct TYPE_11__ {int value; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int,int,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (double,int ) ;
 size_t VAR_1 ;

int FUNC_4 (cache_stat_server_t **VAR_2, int VAR_3, char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    char VAR_8[2048];
    cache_buffer_t VAR_9;
    cache_stat_server_t *VAR_10 = VAR_2[VAR_6];
    union cache_packed_local_copy_location VAR_11;
    VAR_11.i = VAR_10->id;
    FUNC_0 (&VAR_9, VAR_8, sizeof (VAR_8));
    FUNC_1 (&VAR_9, "%d\t%d\t%.6lf\t%lld\t%lld\n",
      (int) VAR_11.p.node_id, (int) VAR_11.p.server_id,
      FUNC_3 (100.0 * VAR_10->access_queries, VAR_0[VAR_1].value),
      VAR_10->files_bytes,
      VAR_10->files);
    if (VAR_9.pos >= VAR_9.size) {
      break;
    }
    if (VAR_7 + VAR_9.pos > VAR_5) {
      break;
    }
    FUNC_2 (VAR_4 + VAR_7, VAR_9.buff, VAR_9.pos);
    VAR_7 += VAR_9.pos;
  }
  return VAR_7;
}
