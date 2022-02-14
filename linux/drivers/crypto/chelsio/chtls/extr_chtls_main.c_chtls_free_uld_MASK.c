
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct chtls_dev {int askb; struct chtls_dev* lldi; int * rspq_skb_cache; int hwtid_idr; TYPE_1__ kmap; int tlsdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct chtls_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct chtls_dev *VAR_1)
{
 int VAR_2;

 FUNC_4(&VAR_1->tlsdev);
 FUNC_3(VAR_1->kmap.addr);
 FUNC_0(&VAR_1->hwtid_idr);
 for (VAR_2 = 0; VAR_2 < (1 << VAR_0); VAR_2++)
  FUNC_2(VAR_1->rspq_skb_cache[VAR_2]);
 FUNC_1(VAR_1->lldi);
 FUNC_2(VAR_1->askb);
 FUNC_1(VAR_1);
}
