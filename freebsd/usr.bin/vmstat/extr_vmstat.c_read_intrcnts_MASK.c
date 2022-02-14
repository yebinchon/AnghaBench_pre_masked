
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kaddr ;
typedef int intrcntlen ;
struct TYPE_2__ {scalar_t__ n_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int * VAR_3 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (uintptr_t,unsigned long*,size_t) ;
 unsigned long* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (char*,unsigned long*,size_t*) ;
 TYPE_1__* VAR_4 ;
 unsigned long* FUNC_5 (unsigned long*,size_t) ;

__attribute__((used)) static unsigned int
FUNC_6(unsigned long **VAR_5)
{
 size_t VAR_6;
 uintptr_t VAR_7;

 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_2, &VAR_6, sizeof(VAR_6));
  if ((*VAR_5 = FUNC_3(VAR_6)) == ((void*)0))
   FUNC_0(1, "malloc()");
  if (VAR_4[VAR_1].n_type == 0)
   FUNC_1(VAR_0, *VAR_5, VAR_6);
  else {
   FUNC_1(VAR_0, &VAR_7, sizeof(VAR_7));
   FUNC_2(VAR_7, *VAR_5, VAR_6);
  }
 } else {
  for (*VAR_5 = ((void*)0), VAR_6 = 1024; ; VAR_6 *= 2) {
   *VAR_5 = FUNC_5(*VAR_5, VAR_6);
   if (*VAR_5 == ((void*)0))
    FUNC_0(1, "reallocf()");
   if (FUNC_4("hw.intrcnt", *VAR_5, &VAR_6) == 0)
    break;
  }
 }

 return (VAR_6 / sizeof(unsigned long));
}
