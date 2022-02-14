
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ str_numstr; int str_flags; } ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void
FUNC_1(void)
{
 uint32_t VAR_3, VAR_4;
 off_t VAR_5;
 off_t *VAR_6;

 VAR_2.str_flags |= VAR_0;
 VAR_3 = VAR_2.str_numstr;





 for (VAR_6 = VAR_1; VAR_3 > 0; VAR_3--, VAR_6++) {
  VAR_4 = FUNC_0(VAR_3);
  VAR_5 = VAR_6[0];
  VAR_6[0] = VAR_6[VAR_4];
  VAR_6[VAR_4] = VAR_5;
 }
}
