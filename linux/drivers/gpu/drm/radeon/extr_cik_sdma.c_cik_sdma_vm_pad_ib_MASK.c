
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ib {int length_dw; int * ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct radeon_ib *VAR_1)
{
 while (VAR_1->length_dw & 0x7)
  VAR_1->ptr[VAR_1->length_dw++] = FUNC_0(VAR_0, 0, 0);
}
