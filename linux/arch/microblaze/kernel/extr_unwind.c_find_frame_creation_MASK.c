
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s16 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static unsigned long *FUNC_3(unsigned long *VAR_0)
{
 int VAR_1;






 for (VAR_1 = 0; VAR_1 < 1000; VAR_1++, VAR_0--) {
  unsigned long VAR_2;
  s16 VAR_3;

  if (!FUNC_1((unsigned long) VAR_0))
   return ((void*)0);

  VAR_2 = *VAR_0;


  if ((VAR_2 & 0xFFFF0000) != 0x30210000)
   continue;

  VAR_3 = FUNC_0(VAR_2);
  if ((VAR_3 < 8) || (VAR_3 & 3)) {
   FUNC_2("    Invalid frame size %d at 0x%p\n",
     VAR_3, VAR_0);
   return ((void*)0);
  }

  FUNC_2("    Found frame creation at 0x%p, size %d\n", VAR_0,
    VAR_3);
  return VAR_0;
 }

 return ((void*)0);
}
