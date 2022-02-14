
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {struct efa_aenq_handlers* aenq_handlers; } ;
struct efa_com_dev {TYPE_1__ aenq; } ;
struct efa_aenq_handlers {scalar_t__ unimplemented_handler; scalar_t__* handlers; } ;
typedef scalar_t__ efa_aenq_handler ;


 size_t VAR_0 ;

__attribute__((used)) static efa_aenq_handler FUNC_0(struct efa_com_dev *VAR_1,
           u16 VAR_2)
{
 struct efa_aenq_handlers *VAR_3 = VAR_1->aenq.aenq_handlers;

 if (VAR_2 < VAR_0 && VAR_3->handlers[VAR_2])
  return VAR_3->handlers[VAR_2];

 return VAR_3->unimplemented_handler;
}
