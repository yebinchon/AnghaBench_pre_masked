
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stream; } ;
struct TYPE_6__ {scalar_t__ rdstate; TYPE_1__ handle; } ;
typedef TYPE_2__ conn ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(conn *VAR_4) {
  FUNC_0(VAR_4->rdstate == VAR_1);
  FUNC_1(0 == FUNC_3(&VAR_4->handle.stream, VAR_2, VAR_3));
  VAR_4->rdstate = VAR_0;
  FUNC_2(VAR_4);
}
