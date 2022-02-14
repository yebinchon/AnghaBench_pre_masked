
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct connection {size_t fd; int generation; } ;
struct TYPE_4__ {int generation; } ;
typedef TYPE_1__ host_t ;


 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,size_t,...) ;

host_t *FUNC_1 (struct connection *VAR_2) {
  if (VAR_2->fd < 0 || VAR_2->fd >= VAR_1) {
    return ((void*)0);
  }
  host_t *VAR_3 = VAR_0[VAR_2->fd];
  if (VAR_3 == ((void*)0)) {
    FUNC_0 (3, "CONN_FD_HOST[%d] = NULL\n", VAR_2->fd);
    return ((void*)0);
  }
  if (VAR_3->generation != VAR_2->generation) {
    FUNC_0 (3, "H->generation (%d) != c->generation (%d)\n", VAR_3->generation, VAR_2->generation);
    return VAR_0[VAR_2->fd] = ((void*)0);
  }
  return VAR_3;
}
