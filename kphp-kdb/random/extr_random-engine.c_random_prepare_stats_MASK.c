
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
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int VAR_4 ;

int FUNC_5 (struct connection *VAR_5) {
  FUNC_1 ();
  stats_buffer_t VAR_6;
  FUNC_3 (&VAR_6, VAR_5, VAR_4, VAR_2);
  FUNC_2 (&VAR_6, VAR_0);
  FUNC_4 (&VAR_6, "version\t%s\n", VAR_1);
  FUNC_0(VAR_3);
  return VAR_6.pos;
}
