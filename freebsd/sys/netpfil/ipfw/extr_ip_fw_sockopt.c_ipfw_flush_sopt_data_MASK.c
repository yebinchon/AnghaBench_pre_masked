
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_data {size_t koff; scalar_t__ ksize; scalar_t__ ktotal; scalar_t__ valsize; scalar_t__ kavail; scalar_t__ sopt_val; int kbuf; struct sockopt* sopt; } ;
struct sockopt {scalar_t__ sopt_dir; scalar_t__ sopt_val; scalar_t__ sopt_valsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,size_t) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct sockopt_data *VAR_1)
{
 struct sockopt *VAR_2;
 int VAR_3;
 size_t VAR_4;

 VAR_4 = VAR_1->koff;
 if (VAR_4 == 0)
  return (0);

 VAR_2 = VAR_1->sopt;

 if (VAR_2->sopt_dir == VAR_0) {
  VAR_3 = FUNC_0(VAR_1->kbuf, VAR_2->sopt_val, VAR_4);
  if (VAR_3 != 0)
   return (VAR_3);
 }

 FUNC_1(VAR_1->kbuf, 0, VAR_1->ksize);
 VAR_1->ktotal += VAR_4;
 VAR_1->koff = 0;
 if (VAR_1->ktotal + VAR_1->ksize < VAR_1->valsize)
  VAR_1->kavail = VAR_1->ksize;
 else
  VAR_1->kavail = VAR_1->valsize - VAR_1->ktotal;


 VAR_2->sopt_valsize = VAR_1->ktotal;
 VAR_2->sopt_val = VAR_1->sopt_val + VAR_1->ktotal;

 return (0);
}
