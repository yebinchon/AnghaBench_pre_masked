
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidma_lldev {int pending_tre_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct hidma_lldev*,int ,int ) ;

void FUNC_2(struct hidma_lldev *VAR_0, u8 VAR_1,
          u8 VAR_2)
{
 while (FUNC_0(&VAR_0->pending_tre_count)) {
  if (FUNC_1(VAR_0, VAR_1, VAR_2))
   break;
 }
}
