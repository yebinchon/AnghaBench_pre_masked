
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p; int type; } ;
struct idt_data {unsigned int vector; TYPE_1__ bits; int segment; void const* addr; } ;
typedef int data ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct idt_data*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct idt_data*,int ,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3, const void *VAR_4)
{
 struct idt_data VAR_5;

 FUNC_0(VAR_3 > 0xFF);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.vector = VAR_3;
 VAR_5.addr = VAR_4;
 VAR_5.segment = VAR_1;
 VAR_5.bits.type = VAR_0;
 VAR_5.bits.p = 1;

 FUNC_1(VAR_2, &VAR_5, 1, 0);
}
