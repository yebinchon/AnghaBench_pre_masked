
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ basic_type; size_t listening; scalar_t__ listening_generation; } ;
struct TYPE_2__ {scalar_t__ basic_type; scalar_t__ generation; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__ VAR_5 ;

void FUNC_1 (struct connection *VAR_6) {
  if (VAR_6->basic_type != VAR_4) {
    if (--VAR_3 < VAR_5 && VAR_0[VAR_6->listening].basic_type == VAR_4 && VAR_0[VAR_6->listening].generation == VAR_6->listening_generation) {
      FUNC_0 (VAR_6->listening, VAR_2 | VAR_1);
    }
  }
}
