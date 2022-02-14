
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vmcs12 {unsigned int exception_bitmap; int page_fault_error_code_mask; int page_fault_error_code_match; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct vmcs12 *VAR_1,
         u16 VAR_2)
{
 bool VAR_3, VAR_4;

 VAR_4 = (VAR_1->exception_bitmap & (1u << VAR_0)) != 0;
 VAR_3 =
  (VAR_2 & VAR_1->page_fault_error_code_mask) !=
   VAR_1->page_fault_error_code_match;
 return VAR_3 ^ VAR_4;
}
