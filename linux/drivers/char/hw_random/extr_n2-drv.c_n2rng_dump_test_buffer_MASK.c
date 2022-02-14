
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2rng {int * test_buffer; TYPE_1__* op; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct n2rng *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->op->dev, "Test buffer slot %d [0x%016llx]\n",
   VAR_2, VAR_1->test_buffer[VAR_2]);
}
