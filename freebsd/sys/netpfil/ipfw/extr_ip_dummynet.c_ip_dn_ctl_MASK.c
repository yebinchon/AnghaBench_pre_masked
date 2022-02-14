
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {scalar_t__ sopt_dir; int sopt_name; int sopt_valsize; TYPE_1__* sopt_td; } ;
struct dn_id {int dummy; } ;
struct TYPE_2__ {int td_ucred; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct sockopt*,int *) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct sockopt*) ;
 void* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct sockopt*,void*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct sockopt *VAR_6)
{
 void *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;

 VAR_8 = FUNC_6(VAR_6->sopt_td, VAR_3);
 if (VAR_8)
  return (VAR_8);


 if (VAR_6->sopt_dir == VAR_5) {
  VAR_8 = FUNC_7(VAR_6->sopt_td->td_ucred, 3);
  if (VAR_8)
   return (VAR_8);
 }

 switch (VAR_6->sopt_name) {
 default :
  FUNC_0("dummynet: unknown option %d", VAR_6->sopt_name);
  VAR_8 = VAR_0;
  break;

 case 129:
 case 131:
 case 130:
 case 128:
  FUNC_0("dummynet: compat option %d", VAR_6->sopt_name);
  VAR_8 = FUNC_4(VAR_6);
  break;

 case 132 :
  if (VAR_6->sopt_dir == VAR_4) {
   VAR_8 = FUNC_2(VAR_6, ((void*)0));
   break;
  }
  VAR_9 = VAR_6->sopt_valsize;
  if (VAR_9 < sizeof(struct dn_id) || VAR_9 > 12000) {
   FUNC_0("argument len %d invalid", VAR_9);
   break;
  }
  VAR_7 = FUNC_5(VAR_9, VAR_1, VAR_2);
  VAR_8 = FUNC_8(VAR_6, VAR_7, VAR_9, VAR_9);
  if (VAR_8)
   break ;
  VAR_8 = FUNC_1(VAR_7, VAR_9);
  break;
 }

 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_7, VAR_1);

 return VAR_8 ;
}
