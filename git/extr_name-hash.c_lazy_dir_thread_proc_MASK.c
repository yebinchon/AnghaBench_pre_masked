
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct lazy_dir_thread_data {int lazy_entries; int k_end; int k_start; int istate; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
 struct lazy_dir_thread_data *VAR_2 = VAR_1;
 struct strbuf VAR_3 = VAR_0;
 FUNC_0(VAR_2->istate, VAR_2->k_start, VAR_2->k_end, ((void*)0), &VAR_3, VAR_2->lazy_entries);
 FUNC_1(&VAR_3);
 return ((void*)0);
}
