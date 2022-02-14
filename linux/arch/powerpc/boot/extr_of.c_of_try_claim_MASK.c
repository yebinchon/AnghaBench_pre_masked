
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned long,int ) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void *FUNC_4(unsigned long VAR_5)
{
 unsigned long VAR_6 = 0;

 if (VAR_4 == 0)
  VAR_4 = FUNC_1((unsigned long)VAR_3, VAR_0);

 for(; VAR_4 < VAR_2; VAR_4 += VAR_0) {



  VAR_6 = (unsigned long) FUNC_2(VAR_4, VAR_5, 0);
  if (VAR_6 != VAR_1)
   break;
 }
 if (VAR_6 == 0)
  return ((void*)0);
 VAR_4 = FUNC_0(VAR_4 + VAR_5);
 return (void *)VAR_6;
}
