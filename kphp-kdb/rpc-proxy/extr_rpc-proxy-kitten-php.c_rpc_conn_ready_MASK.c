
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ status; scalar_t__ fd; } ;
struct TYPE_2__ {scalar_t__ packet_num; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_3) {
  FUNC_1 (VAR_3);
  return VAR_3 && (VAR_3->status == VAR_2 || VAR_3->status == VAR_1 || VAR_3->status == VAR_0) && FUNC_0(VAR_3)->packet_num >= 0 && VAR_3->fd >= 0;
}
