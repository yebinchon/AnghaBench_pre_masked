
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {size_t sopt_valsize; scalar_t__ sopt_dir; TYPE_1__* sopt_td; } ;
struct sadb_x_policy {int dummy; } ;
struct inpcb {int * inp_sp; } ;
struct TYPE_2__ {int * td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct inpcb*,void*,size_t*) ;
 int FUNC_2 (struct inpcb*,int *,void*,size_t) ;
 void* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (struct sockopt*,void*,size_t,size_t) ;
 int FUNC_5 (struct sockopt*,void*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct inpcb *VAR_8, struct sockopt *VAR_9)
{
 void *VAR_10;
 size_t VAR_11;
 int VAR_12;

 if (VAR_8->inp_sp == ((void*)0))
  return (VAR_2);


 VAR_11 = VAR_9->sopt_valsize;
 if (VAR_11 < sizeof(struct sadb_x_policy) || VAR_11 > VAR_6)
  return (VAR_0);

 VAR_10 = FUNC_3(VAR_11, VAR_4, VAR_9->sopt_td ? VAR_5: VAR_3);
 if (VAR_10 == ((void*)0))
  return (VAR_1);





 VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_11);
 if (VAR_12 == 0) {
  if (VAR_9->sopt_dir == VAR_7)
   VAR_12 = FUNC_2(VAR_8,
       VAR_9->sopt_td ? VAR_9->sopt_td->td_ucred: ((void*)0),
       VAR_10, VAR_11);
  else {
   VAR_12 = FUNC_1(VAR_8, VAR_10, &VAR_11);
   if (VAR_12 == 0)
    VAR_12 = FUNC_5(VAR_9, VAR_10, VAR_11);
  }
 }
 FUNC_0(VAR_10, VAR_4);
 return (VAR_12);
}
