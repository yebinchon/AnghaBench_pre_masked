
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mem_input {int request_address; int current_address; } ;
struct dce_mem_input {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 struct dce_mem_input* FUNC_1 (struct mem_input*) ;

__attribute__((used)) static bool FUNC_2(struct mem_input *VAR_2)
{
 struct dce_mem_input *VAR_3 = FUNC_1(VAR_2);
 uint32_t VAR_4;

 FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_4)
  return 1;

 VAR_2->current_address = VAR_2->request_address;
 return 0;
}
