
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int In; } ;
struct TYPE_3__ {int readed; int len; scalar_t__ extra; } ;
typedef TYPE_1__ data_reader_t ;


 int FUNC_0 (int *,void*,int ) ;

void FUNC_1 (data_reader_t *VAR_0, void *VAR_1) {
  VAR_0->readed = 1;
  FUNC_0 (&((struct connection *)(VAR_0->extra))->In, VAR_1, VAR_0->len);
}
