
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int set; int force_release_mask; } ;


 int FUNC_0 (unsigned int const,int ) ;

__attribute__((used)) static void FUNC_1(struct atkbd* VAR_0,
      const void *VAR_1)
{
 const unsigned int *VAR_2 = VAR_1;
 unsigned int VAR_3;

 if (VAR_0->set == 2)
  for (VAR_3 = 0; VAR_2[VAR_3] != -1U; VAR_3++)
   FUNC_0(VAR_2[VAR_3], VAR_0->force_release_mask);
}
