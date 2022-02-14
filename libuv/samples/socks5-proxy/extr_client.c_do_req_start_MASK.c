
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rdstate; scalar_t__ wrstate; scalar_t__ result; } ;
typedef TYPE_1__ conn ;
struct TYPE_7__ {TYPE_1__ incoming; } ;
typedef TYPE_2__ client_ctx ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(client_ctx *VAR_3) {
  conn *VAR_4;

  VAR_4 = &VAR_3->incoming;
  FUNC_0(VAR_4->rdstate == VAR_1);
  FUNC_0(VAR_4->wrstate == VAR_0);
  VAR_4->wrstate = VAR_1;

  if (VAR_4->result < 0) {
    FUNC_3("write error: %s", FUNC_4(VAR_4->result));
    return FUNC_2(VAR_3);
  }

  FUNC_1(VAR_4);
  return VAR_2;
}
