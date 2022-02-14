
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_hw_desc {int dummy; } ;
struct cc_drvdata {scalar_t__ hw_rev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cc_hw_desc*) ;

__attribute__((used)) static inline void FUNC_1(struct cc_drvdata *VAR_1,
          struct cc_hw_desc *VAR_2)
{
 if (VAR_1->hw_rev >= VAR_0)
  FUNC_0(VAR_2);
}
