
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ndptr ;
struct TYPE_5__ {int trace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,unsigned int*) ;
 TYPE_1__* FUNC_2 (int *,unsigned int*) ;
 int VAR_3 ;

void
FUNC_3(const char *VAR_4, int VAR_5)
{
 ndptr VAR_6;
 unsigned int VAR_7;

 if (VAR_4 == ((void*)0)) {
  if (VAR_5)
   VAR_3 |= VAR_1;
  else
   VAR_3 &= ~VAR_1;
  for (VAR_6 = FUNC_1(&VAR_2, &VAR_7); VAR_6 != ((void*)0);
      VAR_6 = FUNC_2(&VAR_2, &VAR_7))
   VAR_6->trace_flags = VAR_0;
 } else {
  VAR_6 = FUNC_0(VAR_4);
  VAR_6->trace_flags = VAR_5;
 }
}
