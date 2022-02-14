
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidma_tre {int data; int (* callback ) (int ) ;} ;
struct hidma_lldev {int handoff_fifo; } ;


 scalar_t__ FUNC_0 (int *,struct hidma_tre**,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct hidma_lldev *VAR_1 = (struct hidma_lldev *)VAR_0;
 struct hidma_tre *VAR_2;

 while (FUNC_0(&VAR_1->handoff_fifo, &VAR_2, 1)) {

  if (VAR_2->callback)
   VAR_2->callback(VAR_2->data);
 }
}
