
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int num_of_irqs; int irq_pos; int node; int irq_mask; struct rmi_device* rmi_dev; int fd; } ;
struct rmi_driver_data {int function_list; struct rmi_function* f34_container; struct rmi_function* f01_container; int irq_count; } ;
struct device {int dummy; } ;
struct rmi_device {struct device dev; } ;
struct pdt_entry {int function_number; int interrupt_source_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rmi_driver_data* FUNC_3 (struct device*) ;
 struct rmi_function* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,struct device*,char*,int) ;
 int FUNC_7 (struct pdt_entry const*,int *) ;
 int FUNC_8 (struct rmi_function*) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct rmi_device *VAR_4,
          void *VAR_5, const struct pdt_entry *VAR_6)
{
 struct device *VAR_7 = &VAR_4->dev;
 struct rmi_driver_data *VAR_8 = FUNC_3(VAR_7);
 int *VAR_9 = VAR_5;
 struct rmi_function *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_6(VAR_2, VAR_7, "Initializing F%02X.\n",
   VAR_6->function_number);

 VAR_10 = FUNC_4(sizeof(struct rmi_function) +
   FUNC_0(VAR_8->irq_count) * sizeof(unsigned long),
       VAR_1);
 if (!VAR_10) {
  FUNC_2(VAR_7, "Failed to allocate memory for F%02X\n",
   VAR_6->function_number);
  return -VAR_0;
 }

 FUNC_1(&VAR_10->node);
 FUNC_7(VAR_6, &VAR_10->fd);

 VAR_10->rmi_dev = VAR_4;

 VAR_10->num_of_irqs = VAR_6->interrupt_source_count;
 VAR_10->irq_pos = *VAR_9;
 *VAR_9 += VAR_10->num_of_irqs;

 for (VAR_11 = 0; VAR_11 < VAR_10->num_of_irqs; VAR_11++)
  FUNC_9(VAR_10->irq_pos + VAR_11, VAR_10->irq_mask);

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12)
  return VAR_12;

 if (VAR_6->function_number == 0x01)
  VAR_8->f01_container = VAR_10;
 else if (VAR_6->function_number == 0x34)
  VAR_8->f34_container = VAR_10;

 FUNC_5(&VAR_10->node, &VAR_8->function_list);

 return VAR_3;
}
