
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct vm_domain {scalar_t__ vmd_interrupt_free_min; scalar_t__ vmd_free_reserved; scalar_t__ vmd_free_count; scalar_t__ vmd_free_min; scalar_t__ vmd_free_severe; int vmd_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct vm_domain*) ;
 scalar_t__ FUNC_3 (struct vm_domain*,scalar_t__) ;

int
FUNC_4(struct vm_domain *VAR_5, int VAR_6, int VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10;

 VAR_6 = VAR_6 & VAR_0;




 if (VAR_3 == VAR_4 && VAR_6 != VAR_1)
  VAR_6 = VAR_2;
 if (VAR_6 == VAR_1)
  VAR_8 = 0;
 else if (VAR_6 == VAR_2)
  VAR_8 = VAR_5->vmd_interrupt_free_min;
 else
  VAR_8 = VAR_5->vmd_free_reserved;




 VAR_8 += VAR_7;
 VAR_9 = VAR_5->vmd_free_count;
 do {
  if (VAR_9 < VAR_8)
   return (0);
  VAR_10 = VAR_9 - VAR_7;
 } while (FUNC_0(&VAR_5->vmd_free_count, &VAR_9, VAR_10) == 0);


 if (FUNC_3(VAR_5, VAR_10) && !FUNC_3(VAR_5, VAR_9))
  FUNC_1(VAR_5->vmd_domain);


 if ((VAR_9 >= VAR_5->vmd_free_min && VAR_10 < VAR_5->vmd_free_min) ||
     (VAR_9 >= VAR_5->vmd_free_severe && VAR_10 < VAR_5->vmd_free_severe))
  FUNC_2(VAR_5);

 return (1);
}
