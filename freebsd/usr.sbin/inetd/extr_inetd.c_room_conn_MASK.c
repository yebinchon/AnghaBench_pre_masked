
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct servtab {int se_maxperip; int se_service; } ;
struct TYPE_2__ {int ss_len; } ;
struct conninfo {TYPE_1__ co_addr; int co_numchild; } ;
typedef int pname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 int FUNC_1 (int ,char*,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct servtab *VAR_3, struct conninfo *VAR_4)
{
 char VAR_5[VAR_1];

 if (VAR_4->co_numchild >= VAR_3->se_maxperip) {
  FUNC_0((struct sockaddr *)&VAR_4->co_addr,
      VAR_4->co_addr.ss_len, VAR_5, sizeof(VAR_5), ((void*)0), 0,
      VAR_2);
  FUNC_1(VAR_0, "%s from %s exceeded counts (limit %d)",
      VAR_3->se_service, VAR_5, VAR_3->se_maxperip);
  return 0;
 }
 return 1;
}
