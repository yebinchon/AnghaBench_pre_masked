
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {struct its_vm* its_vm; } ;
struct its_vm {int vprop_page; int nr_db_lpis; int db_lpi_base; int db_bitmap; } ;
struct irq_domain {struct its_vm* host_data; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct its_vpe* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_5 (struct irq_domain*,unsigned int) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct its_vpe*) ;

__attribute__((used)) static void FUNC_10(struct irq_domain *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2)
{
 struct its_vm *VAR_3 = VAR_0->host_data;
 int VAR_4;

 FUNC_4(VAR_0, VAR_1, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct irq_data *VAR_5 = FUNC_5(VAR_0,
        VAR_1 + VAR_4);
  struct its_vpe *VAR_6 = FUNC_3(VAR_5);

  FUNC_0(VAR_3 != VAR_6->its_vm);

  FUNC_2(VAR_5->hwirq, VAR_3->db_bitmap);
  FUNC_9(VAR_6);
  FUNC_6(VAR_5);
 }

 if (FUNC_1(VAR_3->db_bitmap, VAR_3->nr_db_lpis)) {
  FUNC_8(VAR_3->db_bitmap, VAR_3->db_lpi_base, VAR_3->nr_db_lpis);
  FUNC_7(VAR_3->vprop_page);
 }
}
