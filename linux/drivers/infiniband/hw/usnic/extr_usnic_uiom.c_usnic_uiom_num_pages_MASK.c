
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_reg {scalar_t__ offset; scalar_t__ length; } ;


 size_t FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;

__attribute__((used)) static inline size_t FUNC_1(struct usnic_uiom_reg *VAR_1)
{
 return FUNC_0(VAR_1->length + VAR_1->offset) >> VAR_0;
}
