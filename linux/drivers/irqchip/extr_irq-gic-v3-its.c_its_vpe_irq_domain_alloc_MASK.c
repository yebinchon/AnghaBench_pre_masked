
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct its_vm {unsigned long* db_bitmap; int db_lpi_base; int nr_db_lpis; TYPE_1__** vpes; struct page* vprop_page; } ;
struct irq_domain {int dummy; } ;
struct TYPE_3__ {int vpe_db_lpi; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct irq_domain*,unsigned int,int,int *,TYPE_1__*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct irq_domain*,unsigned int,int) ;
 unsigned long* FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (unsigned long*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (struct irq_domain*,unsigned int,int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_11(struct irq_domain *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, void *VAR_6)
{
 struct its_vm *VAR_7 = VAR_6;
 unsigned long *VAR_8;
 struct page *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0(!VAR_7);

 VAR_8 = FUNC_5(FUNC_9(VAR_5), &VAR_10, &VAR_11);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_11 < VAR_5) {
  FUNC_6(VAR_8, VAR_10, VAR_11);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_1);
 if (!VAR_9) {
  FUNC_6(VAR_8, VAR_10, VAR_11);
  return -VAR_0;
 }

 VAR_7->db_bitmap = VAR_8;
 VAR_7->db_lpi_base = VAR_10;
 VAR_7->nr_db_lpis = VAR_11;
 VAR_7->vprop_page = VAR_9;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_7->vpes[VAR_12]->vpe_db_lpi = VAR_10 + VAR_12;
  VAR_13 = FUNC_7(VAR_7->vpes[VAR_12]);
  if (VAR_13)
   break;
  VAR_13 = FUNC_4(VAR_3, VAR_4 + VAR_12,
            VAR_7->vpes[VAR_12]->vpe_db_lpi);
  if (VAR_13)
   break;
  FUNC_1(VAR_3, VAR_4 + VAR_12, VAR_12,
           &VAR_2, VAR_7->vpes[VAR_12]);
  FUNC_10(VAR_12, VAR_8);
 }

 if (VAR_13) {
  if (VAR_12 > 0)
   FUNC_8(VAR_3, VAR_4, VAR_12 - 1);

  FUNC_6(VAR_8, VAR_10, VAR_11);
  FUNC_3(VAR_9);
 }

 return VAR_13;
}
