
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct sockaddr_un {int sun_path; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct TYPE_2__ {int ar_arg_sockaddr; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct thread*,int,int ) ;
 int FUNC_4 (struct sockaddr*,int *,int ) ;
 struct kaudit_record* FUNC_5 () ;

void
FUNC_6(struct thread *VAR_4, int VAR_5, struct sockaddr *VAR_6)
{
 struct kaudit_record *VAR_7;

 FUNC_1(VAR_4 != ((void*)0), ("audit_arg_sockaddr: td == NULL"));
 FUNC_1(VAR_6 != ((void*)0), ("audit_arg_sockaddr: sa == NULL"));

 VAR_7 = FUNC_5();
 if (VAR_7 == ((void*)0))
  return;

 FUNC_4(VAR_6, &VAR_7->k_ar.ar_arg_sockaddr, VAR_6->sa_len);
 switch (VAR_6->sa_family) {
 case 130:
  FUNC_0(VAR_7, VAR_0);
  break;

 case 129:
  FUNC_0(VAR_7, VAR_1);
  break;

 case 128:
  if (VAR_5 != VAR_3)
   FUNC_2(VAR_5);
  FUNC_3(VAR_4, VAR_5,
      ((struct sockaddr_un *)VAR_6)->sun_path);
  FUNC_0(VAR_7, VAR_2);
  break;

 }
}
