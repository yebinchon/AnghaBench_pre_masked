
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sa_family; } ;
struct TYPE_8__ {TYPE_4__ addr; int connect_req; } ;
struct TYPE_7__ {int tcp; } ;
struct TYPE_9__ {TYPE_2__ t; TYPE_1__ handle; } ;
typedef TYPE_3__ conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *,TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_3(conn *VAR_3) {
  FUNC_0(VAR_3->t.addr.sa_family == VAR_0 ||
         VAR_3->t.addr.sa_family == VAR_1);
  FUNC_1(VAR_3);
  return FUNC_2(&VAR_3->t.connect_req,
                        &VAR_3->handle.tcp,
                        &VAR_3->t.addr,
                        VAR_2);
}
