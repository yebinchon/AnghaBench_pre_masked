
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_cc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct edma_cc*,int ) ;
 scalar_t__ FUNC_1 (struct edma_cc*,int ,int) ;

__attribute__((used)) static inline bool FUNC_2(struct edma_cc *VAR_3)
{
 if (FUNC_1(VAR_3, VAR_1, 0) ||
     FUNC_1(VAR_3, VAR_1, 1) ||
     FUNC_0(VAR_3, VAR_2) || FUNC_0(VAR_3, VAR_0))
  return 1;

 return 0;
}
