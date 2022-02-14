
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_context {int descriptors_bus; int regs; int ohci; int buffer; int pointer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ar_context*,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ar_context *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2, VAR_3);

 VAR_2->pointer = VAR_2->buffer;

 FUNC_3(VAR_2->ohci, FUNC_0(VAR_2->regs), VAR_2->descriptors_bus | 1);
 FUNC_3(VAR_2->ohci, FUNC_1(VAR_2->regs), VAR_1);
}
