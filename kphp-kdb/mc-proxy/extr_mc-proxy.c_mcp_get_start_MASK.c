
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ pending_queries; scalar_t__ generation; } ;
struct TYPE_2__ {scalar_t__ complete_count; scalar_t__ last_complete_count; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1 (struct connection *VAR_4) {
  VAR_3 = 0;
  VAR_2 = 0;
  VAR_1 = 0;
  VAR_4->generation = ++VAR_0;
  VAR_4->pending_queries = 0;
  FUNC_0(VAR_4)->last_complete_count = FUNC_0(VAR_4)->complete_count;
  FUNC_0(VAR_4)->complete_count = 0;
  return 0;
}
