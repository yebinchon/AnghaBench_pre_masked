
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int execute_only_pkey; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*,int) ;
 int FUNC_4 () ;

int FUNC_5(struct mm_struct *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = VAR_2->context.execute_only_pkey;
 int VAR_5;


 if (VAR_4 == -1) {

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0)
   return -1;
  VAR_3 = 1;
 }
 if (!VAR_3 &&
     !FUNC_0(FUNC_4(), VAR_4)) {
  return VAR_4;
 }





 VAR_5 = FUNC_1(VAR_1, VAR_4,
   VAR_0);




 if (VAR_5) {
  FUNC_3(VAR_2, VAR_4);
  return -1;
 }


 if (VAR_3)
  VAR_2->context.execute_only_pkey = VAR_4;
 return VAR_4;
}
