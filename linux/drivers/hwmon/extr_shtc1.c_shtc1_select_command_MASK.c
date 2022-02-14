
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blocking_io; scalar_t__ high_precision; } ;
struct shtc1_data {scalar_t__ chip; int nonblocking_wait_time; TYPE_1__ setup; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct shtc1_data *VAR_9)
{
 if (VAR_9->setup.high_precision) {
  VAR_9->command = VAR_9->setup.blocking_io ?
    VAR_5 :
    VAR_7;
  VAR_9->nonblocking_wait_time = (VAR_9->chip == VAR_4) ?
    VAR_0 :
    VAR_2;
 } else {
  VAR_9->command = VAR_9->setup.blocking_io ?
    VAR_6 :
    VAR_8;
  VAR_9->nonblocking_wait_time = (VAR_9->chip == VAR_4) ?
    VAR_1 :
    VAR_3;
 }
}
