
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppl_io_unit {int header_page; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kmem_cache*,struct ppl_io_unit*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct kmem_cache *VAR_2 = VAR_1;
 struct ppl_io_unit *VAR_3 = VAR_0;

 FUNC_0(VAR_3->header_page);
 FUNC_1(VAR_2, VAR_3);
}
