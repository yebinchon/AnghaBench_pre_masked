
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(unsigned long VAR_4,
  struct vm_area_struct *VAR_5)
{

 bool VAR_6 = 0;

 if (!FUNC_1(VAR_0))
  return 0;
 if (VAR_4 & VAR_2)
  return 1;

 if (!FUNC_0(VAR_5, (VAR_4 & VAR_3),
           (VAR_4 & VAR_1), VAR_6))
  return 1;
 return 0;
}
