
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {scalar_t__ se_policy; scalar_t__* se_argv; scalar_t__ se_pids; scalar_t__ se_server; scalar_t__ se_class; scalar_t__ se_group; scalar_t__ se_user; scalar_t__ se_proto; scalar_t__ se_service; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct servtab*) ;

__attribute__((used)) static void
FUNC_2(struct servtab *VAR_1)
{
 int VAR_2;

 if (VAR_1->se_service)
  FUNC_0(VAR_1->se_service);
 if (VAR_1->se_proto)
  FUNC_0(VAR_1->se_proto);
 if (VAR_1->se_user)
  FUNC_0(VAR_1->se_user);
 if (VAR_1->se_group)
  FUNC_0(VAR_1->se_group);




 if (VAR_1->se_server)
  FUNC_0(VAR_1->se_server);
 if (VAR_1->se_pids)
  FUNC_0(VAR_1->se_pids);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->se_argv[VAR_2])
   FUNC_0(VAR_1->se_argv[VAR_2]);
 FUNC_1(VAR_1);




}
