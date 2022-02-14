
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dma_contract {int completed_demands; int demands; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sun4i_dma_contract* FUNC_1 (int,int ) ;

__attribute__((used)) static struct sun4i_dma_contract *FUNC_2(void)
{
 struct sun4i_dma_contract *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->demands);
 FUNC_0(&VAR_1->completed_demands);

 return VAR_1;
}
