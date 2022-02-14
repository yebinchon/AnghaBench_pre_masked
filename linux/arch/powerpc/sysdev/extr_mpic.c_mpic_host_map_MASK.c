
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_chip {int dummy; } ;
struct mpic {scalar_t__ spurious_vec; scalar_t__* ipi_vecs; int flags; scalar_t__* timer_vecs; scalar_t__ num_sources; struct irq_chip hc_ht_irq; struct irq_chip hc_irq; struct irq_chip hc_tm; struct irq_chip hc_ipi; scalar_t__ protected; } ;
struct irq_domain {struct mpic* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_3 (unsigned int,struct mpic*) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int) ;
 scalar_t__ FUNC_6 (struct mpic*,scalar_t__) ;
 int FUNC_7 (struct mpic*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct mpic*,unsigned int,scalar_t__) ;
 int FUNC_9 (struct mpic*,scalar_t__) ;
 int FUNC_10 (struct mpic*) ;
 int FUNC_11 (unsigned int,int) ;
 int FUNC_12 (unsigned int,scalar_t__) ;
 int FUNC_13 (char*,unsigned int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct irq_domain *VAR_7, unsigned int VAR_8,
    irq_hw_number_t VAR_9)
{
 struct mpic *VAR_10 = VAR_7->host_data;
 struct irq_chip *VAR_11;

 FUNC_0("mpic: map virq %d, hwirq 0x%lx\n", VAR_8, VAR_9);

 if (VAR_9 == VAR_10->spurious_vec)
  return -VAR_0;
 if (VAR_10->protected && FUNC_16(VAR_9, VAR_10->protected)) {
  FUNC_13("mpic: Mapping of source 0x%x failed, source protected by firmware !\n",
   (unsigned int)VAR_9);
  return -VAR_1;
 }
 if (VAR_9 >= VAR_10->timer_vecs[0] && VAR_9 <= VAR_10->timer_vecs[7]) {
  FUNC_1(VAR_10->flags & VAR_4);

  FUNC_0("mpic: mapping as timer\n");
  FUNC_3(VAR_8, VAR_10);
  FUNC_2(VAR_8, &VAR_10->hc_tm,
      VAR_5);
  return 0;
 }

 if (FUNC_8(VAR_10, VAR_8, VAR_9))
  return 0;

 if (VAR_9 >= VAR_10->num_sources) {
  FUNC_13("mpic: Mapping of source 0x%x failed, source out of range !\n",
   (unsigned int)VAR_9);
  return -VAR_0;
 }

 FUNC_9(VAR_10, VAR_9);


 VAR_11 = &VAR_10->hc_irq;







 FUNC_0("mpic: mapping to irq chip @%p\n", VAR_11);

 FUNC_3(VAR_8, VAR_10);
 FUNC_2(VAR_8, VAR_11, VAR_5);


 FUNC_4(VAR_8, VAR_2);





 if (!FUNC_7(VAR_10, VAR_9) && (VAR_10->flags & VAR_3)) {
  int VAR_12;

  FUNC_14();
  VAR_12 = FUNC_10(VAR_10);
  FUNC_15();

  FUNC_12(VAR_8, VAR_9);
  FUNC_11(VAR_8, VAR_12);
  FUNC_5(VAR_8, 8);
 }

 return 0;
}
