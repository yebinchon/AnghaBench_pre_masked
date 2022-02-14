
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (char*,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void*,int) ;
 scalar_t__ VAR_1 ;

int
FUNC_2(void *VAR_2, void *VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_0, (u_long)VAR_2, VAR_3, VAR_4) != VAR_4) {
  if (VAR_1)
   FUNC_0("error reading kmem at %p", VAR_2);
  return (0);
 }
 else
  return (1);
}
