
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {unsigned long addr; size_t sz; void const* data; int cpu_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,void const*,size_t) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct patch*,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2, const void *VAR_3, size_t VAR_4)
{
 if (FUNC_1(VAR_0)) {
  struct patch VAR_5 = {
   .cpu_count = FUNC_0(0),
   .addr = VAR_2,
   .sz = VAR_4,
   .data = VAR_3,
  };
  FUNC_5(VAR_1,
     &VAR_5, ((void*)0));
 } else {
  unsigned long VAR_6;

  FUNC_3(VAR_6);
  FUNC_4(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_6);
 }
}
