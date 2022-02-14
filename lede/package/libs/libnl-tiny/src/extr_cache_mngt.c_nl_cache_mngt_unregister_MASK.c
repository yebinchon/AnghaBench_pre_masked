
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cache_ops {struct nl_cache_ops* co_next; int co_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 struct nl_cache_ops* VAR_1 ;

int FUNC_1(struct nl_cache_ops *VAR_2)
{
 struct nl_cache_ops *VAR_3, **VAR_4;

 for (VAR_4 = &VAR_1; (VAR_3=*VAR_4) != ((void*)0); VAR_4 = &VAR_3->co_next)
  if (VAR_3 == VAR_2)
   break;

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(1, "Unregistered cache operations %s\n", VAR_2->co_name);

 *VAR_4 = VAR_3->co_next;
 return 0;
}
