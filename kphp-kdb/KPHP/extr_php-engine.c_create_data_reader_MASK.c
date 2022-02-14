
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_3__ {int len; int read; struct connection* extra; scalar_t__ readed; } ;
typedef TYPE_1__ data_reader_t ;


 int VAR_0 ;

data_reader_t *FUNC_0 (struct connection *VAR_1, int VAR_2) {
  static data_reader_t VAR_3;

  VAR_3.readed = 0;
  VAR_3.len = VAR_2;
  VAR_3.extra = VAR_1;

  VAR_3.read = VAR_0;

  return &VAR_3;
}
