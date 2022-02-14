
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmemmap_backing {struct vmemmap_backing* list; int virt_addr; } ;
struct pg_state {int seq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pg_state*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 struct vmemmap_backing* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_3)
{
 struct vmemmap_backing *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_0))
  return;




 while (VAR_4->list) {
  FUNC_1(VAR_3, VAR_4->virt_addr, VAR_1);
  VAR_4 = VAR_4->list;
 }
 FUNC_2(VAR_3->seq, "---[ vmemmap end ]---\n");
}
