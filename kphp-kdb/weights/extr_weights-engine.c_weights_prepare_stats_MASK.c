
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int avg; int max; int min; } ;
typedef TYPE_1__ weights_half_life_stat_t ;
struct connection {int dummy; } ;
struct TYPE_8__ {int pos; } ;
typedef TYPE_2__ stats_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,struct connection*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6 (struct connection *VAR_15) {
  stats_buffer_t VAR_16;
  FUNC_3 (&VAR_16, VAR_15, VAR_9, VAR_4);
  FUNC_2 (&VAR_16, VAR_0);
  VAR_2;
  VAR_3;

  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);

  FUNC_0(VAR_13);
  FUNC_0(VAR_10);
  FUNC_0(VAR_11);
  FUNC_0(VAR_12);
  FUNC_0(VAR_14);

  weights_half_life_stat_t VAR_17;
  FUNC_5 (&VAR_17);
  FUNC_0(VAR_17.min);
  FUNC_0(VAR_17.max);
  FUNC_4 (&VAR_16, "half_life.avg\t%.3lf\n", VAR_17.avg);

  FUNC_4 (&VAR_16, "version\t%s\n", VAR_1);

  return VAR_16.pos;
}
