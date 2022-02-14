
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct its_node {int (* get_msi_base ) (struct its_device*) ;} ;
struct TYPE_5__ {scalar_t__ lpi_base; } ;
struct its_device {TYPE_2__ event_map; struct its_node* its; } ;
struct irq_domain {int dummy; } ;
struct TYPE_6__ {int desc; TYPE_1__* scratchpad; } ;
typedef TYPE_3__ msi_alloc_info_t ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_4__ {struct its_device* ptr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int,scalar_t__,int *,struct its_device*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct its_device*,unsigned int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_6 (struct irq_domain*,unsigned int,scalar_t__) ;
 int FUNC_7 (char*,int,int,unsigned int) ;
 int FUNC_8 (struct its_device*) ;

__attribute__((used)) static int FUNC_9(struct irq_domain *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, void *VAR_4)
{
 msi_alloc_info_t *VAR_5 = VAR_4;
 struct its_device *VAR_6 = VAR_5->scratchpad[0].ptr;
 struct its_node *VAR_7 = VAR_6->its;
 irq_hw_number_t VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_6, VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_5->desc, VAR_7->get_msi_base(VAR_6));
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9 = FUNC_6(VAR_1, VAR_2 + VAR_10, VAR_8 + VAR_10);
  if (VAR_9)
   return VAR_9;

  FUNC_2(VAR_1, VAR_2 + VAR_10,
           VAR_8 + VAR_10, &VAR_0, VAR_6);
  FUNC_4(FUNC_1(FUNC_3(VAR_2 + VAR_10)));
  FUNC_7("ID:%d pID:%d vID:%d\n",
    (int)(VAR_8 + VAR_10 - VAR_6->event_map.lpi_base),
    (int)(VAR_8 + VAR_10), VAR_2 + VAR_10);
 }

 return 0;
}
