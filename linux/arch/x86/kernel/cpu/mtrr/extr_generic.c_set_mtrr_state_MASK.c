
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_type; int enabled; int fixed_ranges; scalar_t__ have_fixed; int * var_ranges; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (FUNC_1(VAR_7, &VAR_4.var_ranges[VAR_7]))
   VAR_6 |= VAR_2;
 }

 if (VAR_4.have_fixed && FUNC_0(VAR_4.fixed_ranges))
  VAR_6 |= VAR_1;





 if ((VAR_3 & 0xff) != VAR_4.def_type
     || ((VAR_3 & 0xc00) >> 10) != VAR_4.enabled) {

  VAR_3 = (VAR_3 & ~0xcff) | VAR_4.def_type |
        (VAR_4.enabled << 10);
  VAR_6 |= VAR_0;
 }

 return VAR_6;
}
