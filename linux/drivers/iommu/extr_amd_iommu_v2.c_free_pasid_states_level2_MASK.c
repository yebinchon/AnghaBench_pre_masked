
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int dummy; } ;


 int FUNC_0 (struct pasid_state**) ;

__attribute__((used)) static void FUNC_1(struct pasid_state **VAR_0)
{
 struct pasid_state **VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 512; ++VAR_2) {
  if (VAR_0[VAR_2] == ((void*)0))
   continue;

  VAR_1 = (struct pasid_state **)VAR_0[VAR_2];
  FUNC_0(VAR_1);
 }
}
