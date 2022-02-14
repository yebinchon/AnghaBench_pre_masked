
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int free; int run; } ;
typedef TYPE_2__ command_t ;
struct TYPE_6__ {int free; int run; } ;
struct TYPE_8__ {int len; long long extra; void* data; TYPE_1__ base; } ;
typedef TYPE_3__ command_net_write_t ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*,char const*,size_t) ;

command_t *FUNC_2 (const char *VAR_0, int VAR_1, command_t *VAR_2, long long VAR_3) {
  command_net_write_t *VAR_4 = FUNC_0 (sizeof (command_net_write_t));
  VAR_4->base.run = VAR_2->run;
  VAR_4->base.free = VAR_2->free;

  VAR_4->data = FUNC_0 ((size_t)VAR_1);
  FUNC_1 (VAR_4->data, VAR_0, (size_t)VAR_1);
  VAR_4->len = VAR_1;
  VAR_4->extra = VAR_3;

  return (command_t *)VAR_4;
}
