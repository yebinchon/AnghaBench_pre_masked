
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring {unsigned int space; int size; int emit; int head; } ;


 unsigned int FUNC_0 (int ,int ,int ) ;

unsigned int FUNC_1(struct intel_ring *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_0(VAR_0->head, VAR_0->emit, VAR_0->size);

 VAR_0->space = VAR_1;
 return VAR_1;
}
