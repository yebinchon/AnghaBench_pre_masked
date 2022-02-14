
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct streebog_state {int fillsize; int* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct streebog_state *VAR_1)
{
 if (VAR_1->fillsize >= VAR_0)
  return;

 FUNC_0(VAR_1->buffer + VAR_1->fillsize, 0,
        sizeof(VAR_1->buffer) - VAR_1->fillsize);

 VAR_1->buffer[VAR_1->fillsize] = 1;
}
