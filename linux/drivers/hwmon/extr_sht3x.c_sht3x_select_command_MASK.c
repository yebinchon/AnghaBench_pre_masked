
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ high_precision; scalar_t__ blocking_io; } ;
struct sht3x_data {scalar_t__ mode; scalar_t__ wait_time; int command; TYPE_1__ setup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct sht3x_data *VAR_7)
{






 if (VAR_7->mode > 0) {
  VAR_7->command = VAR_6;
  VAR_7->wait_time = 0;
 } else if (VAR_7->setup.blocking_io) {
  VAR_7->command = VAR_7->setup.high_precision ?
    VAR_2 :
    VAR_3;
  VAR_7->wait_time = 0;
 } else {
  if (VAR_7->setup.high_precision) {
   VAR_7->command = VAR_4;
   VAR_7->wait_time = VAR_0;
  } else {
   VAR_7->command = VAR_5;
   VAR_7->wait_time = VAR_1;
  }
 }
}
