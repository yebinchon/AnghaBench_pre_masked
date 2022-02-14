
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emit_callback {void* lno_in_postimage; void* lno_in_preimage; } ;


 char* FUNC_0 (char const*,char) ;
 void* FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, struct emit_callback *VAR_1)
{
 const char *VAR_2;
 VAR_1->lno_in_preimage = 0;
 VAR_1->lno_in_postimage = 0;
 VAR_2 = FUNC_0(VAR_0, '-');
 if (!VAR_2)
  return;
 VAR_1->lno_in_preimage = FUNC_1(VAR_2 + 1, ((void*)0), 10);
 VAR_2 = FUNC_0(VAR_2, '+');
 if (!VAR_2)
  return;
 VAR_1->lno_in_postimage = FUNC_1(VAR_2 + 1, ((void*)0), 10);
}
