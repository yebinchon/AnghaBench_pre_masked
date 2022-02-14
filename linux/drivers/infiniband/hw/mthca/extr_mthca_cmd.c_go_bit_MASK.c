
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {scalar_t__ hcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct mthca_dev *VAR_2)
{
 return FUNC_0(VAR_2->hcr + VAR_1) &
  FUNC_1(1 << VAR_0);
}
