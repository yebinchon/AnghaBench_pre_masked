
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_len; int * buf; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1 (dl_zout *VAR_0) {
  if (VAR_0->buf != ((void*)0)) {
    FUNC_0 (VAR_0->buf, VAR_0->buf_len);
    VAR_0->buf = ((void*)0);
    VAR_0->buf_len = 0;
  }
}
