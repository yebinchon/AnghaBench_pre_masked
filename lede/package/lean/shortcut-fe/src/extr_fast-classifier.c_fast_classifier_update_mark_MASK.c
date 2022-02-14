
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfe_connection_mark {int mark; int protocol; int dest_port; int src_port; int dest_ip; int src_ip; } ;
struct sfe_connection {TYPE_1__* sic; } ;
struct TYPE_2__ {int mark; } ;


 struct sfe_connection* FUNC_0 (int *,int *,int ,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sfe_connection_mark *VAR_1, bool VAR_2)
{
 struct sfe_connection *VAR_3;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_0(&VAR_1->src_ip, &VAR_1->dest_ip,
      VAR_1->src_port, VAR_1->dest_port,
      VAR_1->protocol, VAR_2);
 if (VAR_3) {
  VAR_3->sic->mark = VAR_1->mark;
 }

 FUNC_2(&VAR_0);
}
