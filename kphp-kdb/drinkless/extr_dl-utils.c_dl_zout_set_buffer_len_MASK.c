
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; scalar_t__ buf; int buf_len; int left; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (dl_zout *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0->ptr == VAR_0->buf);

  if (VAR_0->buf_len != VAR_1) {
    FUNC_2 (VAR_0);
    VAR_0->buf_len = VAR_1;
    FUNC_0 ("Too small buffer for output" && VAR_0->buf_len > 8);
    VAR_0->buf = FUNC_1 ((size_t)VAR_0->buf_len);
  }

  VAR_0->ptr = VAR_0->buf;
  VAR_0->left = VAR_0->buf_len;
}
