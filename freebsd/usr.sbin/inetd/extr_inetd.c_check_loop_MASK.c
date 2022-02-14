
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_len; } ;
struct TYPE_6__ {int sin6_port; } ;
struct TYPE_5__ {int sin_port; } ;
struct servtab {scalar_t__ se_socktype; int se_family; int se_proto; int se_service; TYPE_2__ se_ctrladdr6; TYPE_1__ se_ctrladdr4; int se_bi; struct servtab* se_next; } ;
typedef int pname ;
struct TYPE_8__ {int sin_port; } ;
struct TYPE_7__ {int sin6_port; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (struct sockaddr const*) ;
 TYPE_3__* FUNC_1 (struct sockaddr const*) ;
 int FUNC_2 (struct sockaddr const*,int ,char*,int,int *,int ,int ) ;
 struct servtab* VAR_4 ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,char*) ;

int
FUNC_4(const struct sockaddr *VAR_5, const struct servtab *VAR_6)
{
 struct servtab *VAR_7;
 char VAR_8[VAR_1];

 for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->se_next) {
  if (!VAR_7->se_bi || VAR_7->se_socktype != VAR_3)
   continue;

  switch (VAR_7->se_family) {
  case 129:
   if (FUNC_0(VAR_5)->sin_port ==
       VAR_7->se_ctrladdr4.sin_port)
    goto isloop;
   continue;







  default:
   continue;
  }
 isloop:
  FUNC_2(VAR_5, VAR_5->sa_len, VAR_8, sizeof(VAR_8), ((void*)0), 0,
       VAR_2);
  FUNC_3(VAR_0, "%s/%s:%s/%s loop request REFUSED from %s",
         VAR_6->se_service, VAR_6->se_proto,
         VAR_7->se_service, VAR_7->se_proto,
         VAR_8);
  return 1;
 }
 return 0;
}
