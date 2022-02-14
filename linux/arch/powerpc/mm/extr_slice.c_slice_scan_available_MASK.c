
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; int high_slices; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static bool FUNC_4(unsigned long VAR_3,
     const struct slice_mask *VAR_4,
     int VAR_5, unsigned long *VAR_6)
{
 unsigned long VAR_7;
 if (FUNC_2(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3);
  *VAR_6 = (VAR_7 + VAR_5) << VAR_1;
  return !!(VAR_4->low_slices & (1u << VAR_7));
 } else {
  VAR_7 = FUNC_0(VAR_3);
  *VAR_6 = (VAR_7 + VAR_5) ?
   ((VAR_7 + VAR_5) << VAR_0) : VAR_2;
  return !!FUNC_3(VAR_7, VAR_4->high_slices);
 }
}
