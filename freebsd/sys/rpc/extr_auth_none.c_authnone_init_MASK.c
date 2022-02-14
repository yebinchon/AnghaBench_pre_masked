
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ah_verf; int ah_cred; int * ah_ops; } ;
struct authnone_private {int mcnt; TYPE_1__ no_client; int mclient; } ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct authnone_private VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct authnone_private *VAR_6 = &VAR_4;
 XDR VAR_7;

 VAR_6->no_client.ah_cred = VAR_6->no_client.ah_verf = VAR_2;
 VAR_6->no_client.ah_ops = &VAR_3;
 FUNC_3(&VAR_7, VAR_6->mclient, VAR_0, VAR_1);
 FUNC_2(&VAR_7, &VAR_6->no_client.ah_cred);
 FUNC_2(&VAR_7, &VAR_6->no_client.ah_verf);
 VAR_6->mcnt = FUNC_1(&VAR_7);
 FUNC_0(&VAR_7);
}
