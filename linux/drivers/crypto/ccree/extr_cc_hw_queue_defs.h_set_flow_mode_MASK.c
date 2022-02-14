
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_hw_desc {int * word; } ;
typedef enum cc_flow_mode { ____Placeholder_cc_flow_mode } cc_flow_mode ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct cc_hw_desc *VAR_1,
     enum cc_flow_mode VAR_2)
{
 VAR_1->word[4] |= FUNC_0(VAR_0, VAR_2);
}
