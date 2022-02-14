
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t context_len; int context; } ;


 size_t FUNC_0 (int,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;

void FUNC_2(const unsigned char* VAR_1, size_t VAR_2)
{
 if (!VAR_0)
  return;
 VAR_2 = FUNC_0(sizeof(VAR_0->context), VAR_2);
 VAR_0->context_len = VAR_2;
 FUNC_1(VAR_0->context, VAR_1, VAR_2);
}
