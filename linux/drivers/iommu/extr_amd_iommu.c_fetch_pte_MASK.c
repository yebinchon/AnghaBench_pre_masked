
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int mode; int * pt_root; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t FUNC_2 (int,unsigned long) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int) ;
 int * FUNC_6 (int *,unsigned long*,int *) ;

__attribute__((used)) static u64 *FUNC_7(struct protection_domain *VAR_1,
        unsigned long VAR_2,
        unsigned long *VAR_3)
{
 int VAR_4;
 u64 *VAR_5;

 *VAR_3 = 0;

 if (VAR_2 > FUNC_3(VAR_1->mode))
  return ((void*)0);

 VAR_4 = VAR_1->mode - 1;
 VAR_5 = &VAR_1->pt_root[FUNC_2(VAR_4, VAR_2)];
 *VAR_3 = FUNC_5(VAR_4);

 while (VAR_4 > 0) {


  if (!FUNC_1(*VAR_5))
   return ((void*)0);


  if (FUNC_4(*VAR_5) == 7 ||
      FUNC_4(*VAR_5) == 0)
   break;


  if (FUNC_4(*VAR_5) != VAR_4)
   return ((void*)0);

  VAR_4 -= 1;


  VAR_5 = FUNC_0(*VAR_5);
  VAR_5 = &VAR_5[FUNC_2(VAR_4, VAR_2)];
  *VAR_3 = FUNC_5(VAR_4);
 }





 if (FUNC_4(*VAR_5) == VAR_0)
  VAR_5 = FUNC_6(VAR_5, VAR_3, ((void*)0));

 return VAR_5;
}
