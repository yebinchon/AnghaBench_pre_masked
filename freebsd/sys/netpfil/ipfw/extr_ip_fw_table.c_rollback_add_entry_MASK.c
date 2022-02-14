
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tableop_state {void* tc; void* ch; int modified; } ;
struct op_state {int dummy; } ;
typedef void ip_fw_chain ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct tableop_state*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct op_state *VAR_1)
{
 struct ip_fw_chain *VAR_2;
 struct tableop_state *VAR_3;

 VAR_3 = (struct tableop_state *)VAR_1;

 if (VAR_3->tc != VAR_0 && VAR_3->ch != VAR_0)
  return;

 VAR_2 = VAR_3->ch;

 FUNC_0(VAR_2);


 FUNC_1(VAR_3);


 VAR_3->modified = 1;
}
