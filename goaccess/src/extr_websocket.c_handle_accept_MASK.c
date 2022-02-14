
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int colist; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_10__ {int remote_ip; int sslstatus; } ;
typedef TYPE_2__ WSClient ;
struct TYPE_11__ {scalar_t__ use_ssl; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int,int *) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_5 (int VAR_4, WSServer * VAR_5)
{
  WSClient *VAR_6 = ((void*)0);
  int VAR_7;

  VAR_7 = FUNC_1 (VAR_4, &VAR_5->colist);
  if (VAR_7 == -1)
    return;

  VAR_6 = FUNC_4 (VAR_7, &VAR_5->colist);
  if (VAR_7 > VAR_0 - 1) {
    FUNC_0 (("Too busy: %d %s.\n", VAR_7, VAR_6->remote_ip));

    FUNC_3 (VAR_6, VAR_2);
    FUNC_2 (VAR_7, VAR_6, VAR_5);
    return;
  }






  FUNC_0 (("Accepted: %d %s\n", VAR_7, VAR_6->remote_ip));
}
