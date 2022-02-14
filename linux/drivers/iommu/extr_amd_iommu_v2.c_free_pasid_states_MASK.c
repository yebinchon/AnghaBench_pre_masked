
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int mm; int mn; } ;
struct device_state {int max_pasids; int pasid_levels; scalar_t__ states; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct pasid_state* FUNC_4 (struct device_state*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct device_state*) ;
 int FUNC_7 (struct pasid_state*) ;
 int FUNC_8 (struct pasid_state*) ;

__attribute__((used)) static void FUNC_9(struct device_state *VAR_0)
{
 struct pasid_state *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_pasids; ++VAR_2) {
  VAR_1 = FUNC_4(VAR_0, VAR_2);
  if (VAR_1 == ((void*)0))
   continue;

  FUNC_7(VAR_1);





  FUNC_5(&VAR_1->mn, VAR_1->mm);

  FUNC_8(VAR_1);



  FUNC_6(VAR_0);
 }

 if (VAR_0->pasid_levels == 2)
  FUNC_3(VAR_0->states);
 else if (VAR_0->pasid_levels == 1)
  FUNC_2(VAR_0->states);
 else
  FUNC_0(VAR_0->pasid_levels != 0);

 FUNC_1((unsigned long)VAR_0->states);
}
