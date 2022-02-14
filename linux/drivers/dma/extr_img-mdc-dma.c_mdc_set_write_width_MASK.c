
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdc_hw_list_desc {int gen_conf; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct mdc_hw_list_desc *VAR_1,
           unsigned int VAR_2)
{
 VAR_1->gen_conf |= FUNC_0(VAR_2) <<
  VAR_0;
}
