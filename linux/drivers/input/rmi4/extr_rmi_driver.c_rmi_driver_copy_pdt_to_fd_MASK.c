
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function_descriptor {int function_version; int interrupt_source_count; int function_number; scalar_t__ data_base_addr; scalar_t__ control_base_addr; scalar_t__ command_base_addr; scalar_t__ query_base_addr; } ;
struct pdt_entry {int function_version; int interrupt_source_count; int function_number; scalar_t__ page_start; scalar_t__ data_base_addr; scalar_t__ control_base_addr; scalar_t__ command_base_addr; scalar_t__ query_base_addr; } ;



__attribute__((used)) static void FUNC_0(const struct pdt_entry *VAR_0,
          struct rmi_function_descriptor *VAR_1)
{
 VAR_1->query_base_addr = VAR_0->query_base_addr + VAR_0->page_start;
 VAR_1->command_base_addr = VAR_0->command_base_addr + VAR_0->page_start;
 VAR_1->control_base_addr = VAR_0->control_base_addr + VAR_0->page_start;
 VAR_1->data_base_addr = VAR_0->data_base_addr + VAR_0->page_start;
 VAR_1->function_number = VAR_0->function_number;
 VAR_1->interrupt_source_count = VAR_0->interrupt_source_count;
 VAR_1->function_version = VAR_0->function_version;
}
