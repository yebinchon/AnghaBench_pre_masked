
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {void* context_ptr; int context_u; int next_page; int get_page; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct dpages *VAR_2, void *VAR_3)
{
 VAR_2->get_page = VAR_0;
 VAR_2->next_page = VAR_1;
 VAR_2->context_u = FUNC_0(VAR_3);
 VAR_2->context_ptr = VAR_3;
}
