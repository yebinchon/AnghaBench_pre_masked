
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
typedef int uv_stream_t ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_3__ uv_handle_t ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,int,int*,int*) ;
 int FUNC_2 (int,int ,int,void const*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(uv_handle_t* VAR_7, int VAR_8, int* VAR_9) {
  int VAR_10;
  int VAR_11;
  socklen_t VAR_12;

  if (VAR_7 == ((void*)0) || VAR_9 == ((void*)0))
    return VAR_1;

  if (VAR_7->type == VAR_4 || VAR_7->type == VAR_3)
    VAR_11 = FUNC_3((uv_stream_t*) VAR_7);
  else if (VAR_7->type == VAR_5)
    VAR_11 = ((uv_udp_t *) VAR_7)->io_watcher.fd;
  else
    return VAR_2;

  VAR_12 = sizeof(*VAR_9);

  if (*VAR_9 == 0)
    VAR_10 = FUNC_1(VAR_11, VAR_0, VAR_8, VAR_9, &VAR_12);
  else
    VAR_10 = FUNC_2(VAR_11, VAR_0, VAR_8, (const void*) VAR_9, VAR_12);

  if (VAR_10 < 0)
    return FUNC_0(VAR_6);

  return 0;
}
