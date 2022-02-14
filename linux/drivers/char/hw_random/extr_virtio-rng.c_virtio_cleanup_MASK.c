
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtrng_info {int have_data; scalar_t__ busy; } ;
struct hwrng {scalar_t__ priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hwrng *VAR_0)
{
 struct virtrng_info *VAR_1 = (struct virtrng_info *)VAR_0->priv;

 if (VAR_1->busy)
  FUNC_0(&VAR_1->have_data);
}
