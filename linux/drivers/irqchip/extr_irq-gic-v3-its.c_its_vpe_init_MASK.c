
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct its_vpe {int vpe_id; int vpe_proxy_event; struct page* vpt_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct its_vpe *VAR_2)
{
 struct page *VAR_3;
 int VAR_4;


 VAR_4 = FUNC_3();
 if (VAR_4 < 0)
  return VAR_4;


 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 if (!FUNC_0(VAR_4)) {
  FUNC_4(VAR_4);
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 VAR_2->vpe_id = VAR_4;
 VAR_2->vpt_page = VAR_3;
 VAR_2->vpe_proxy_event = -1;

 return 0;
}
