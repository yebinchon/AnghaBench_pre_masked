
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int dummy; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct pasid_state **VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 512; ++VAR_1) {
  if (VAR_0[VAR_1] == ((void*)0))
   continue;

  FUNC_0((unsigned long)VAR_0[VAR_1]);
 }
}
