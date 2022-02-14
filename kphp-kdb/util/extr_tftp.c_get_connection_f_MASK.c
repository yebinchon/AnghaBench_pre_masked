
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_9__ {int block_size; TYPE_1__ u; } ;
typedef TYPE_2__ tftp_connection_t ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int) ;

tftp_connection_t *FUNC_5 (int VAR_2, int VAR_3) {
  if (VAR_2 < 0 || VAR_2 > 0xffff) { return ((void*)0); }
  tftp_connection_t *VAR_4 = VAR_0[VAR_2];
  if (!VAR_3) { return VAR_4; }
  if (VAR_3 > 0) {
    VAR_1++;
    VAR_4 = FUNC_4 (sizeof (tftp_connection_t));
    VAR_4->block_size = 512;
    return VAR_0[VAR_2] = VAR_4;
  }
  FUNC_0 (VAR_3 < 0);
  if (VAR_4 != ((void*)0)) {
    VAR_1--;
    FUNC_1 (&VAR_4->u.fd);
    FUNC_2 (VAR_4);
    FUNC_3 (VAR_4, sizeof (tftp_connection_t));
    VAR_0[VAR_2] = ((void*)0);
  }
  return VAR_4;
}
