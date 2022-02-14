
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int tag; } ;
struct driver_data {TYPE_1__* port; } ;
struct TYPE_2__ {int cmds_to_issue; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct request *VAR_0, void *VAR_1, bool VAR_2)
{
 struct driver_data *VAR_3 = VAR_1;

 FUNC_1(VAR_0->tag, VAR_3->port->cmds_to_issue);
 FUNC_0(VAR_0);
 return 1;
}
