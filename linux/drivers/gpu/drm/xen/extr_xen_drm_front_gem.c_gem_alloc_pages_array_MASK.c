
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int pages; int num_pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct xen_gem_object *VAR_3,
     size_t VAR_4)
{
 VAR_3->num_pages = FUNC_0(VAR_4, VAR_2);
 VAR_3->pages = FUNC_1(VAR_3->num_pages,
     sizeof(struct page *), VAR_1);
 return !VAR_3->pages ? -VAR_0 : 0;
}
