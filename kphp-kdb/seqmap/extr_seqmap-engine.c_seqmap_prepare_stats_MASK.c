
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,long,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_3 (struct connection *VAR_7) {
  stats_buffer_t VAR_8;
  FUNC_1 (&VAR_8, VAR_7, VAR_5, VAR_3);
  FUNC_0 (&VAR_8, VAR_0);
  FUNC_2 (&VAR_8,
    "malloc_mem\t%ld\n"
    "zalloc_mem\t%ld\n",
    (long) VAR_4,
    (long) VAR_6);

  VAR_2;

  FUNC_2 (&VAR_8, "%s\n", VAR_1);
  return VAR_8.pos;
}
