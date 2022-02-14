
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int buf_len; int left; scalar_t__ buf; scalar_t__ ptr; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;

void FUNC_1 (dl_zout *VAR_0) {
  ssize_t VAR_1 = VAR_0->ptr - VAR_0->buf;
  if (VAR_1) {
    FUNC_0 (VAR_0, VAR_0->buf, VAR_1);

    VAR_0->ptr = VAR_0->buf;
    VAR_0->left = VAR_0->buf_len;
  }
}
