
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct irq_data {TYPE_1__* domain; } ;
struct fsl_msi {int srs_shift; TYPE_2__** cascade_array; } ;
typedef int irq_hw_number_t ;
struct TYPE_4__ {int virq; } ;
struct TYPE_3__ {struct fsl_msi* host_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1, struct seq_file *VAR_2)
{
 struct fsl_msi *VAR_3 = VAR_1->domain->host_data;
 irq_hw_number_t VAR_4 = FUNC_0(VAR_1);
 int VAR_5, VAR_6;

 VAR_6 = (VAR_4 >> VAR_3->srs_shift) & VAR_0;
 VAR_5 = VAR_3->cascade_array[VAR_6]->virq;

 FUNC_1(VAR_2, " fsl-msi-%d", VAR_5);
}
