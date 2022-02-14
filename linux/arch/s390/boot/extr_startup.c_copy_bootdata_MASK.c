
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bootdata_size; scalar_t__ bootdata_preserved_size; scalar_t__ bootdata_preserved_off; scalar_t__ bootdata_off; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_0 - VAR_3 != VAR_4.bootdata_size)
  FUNC_0(".boot.data section size mismatch");
 FUNC_1((void *)VAR_4.bootdata_off, VAR_3, VAR_4.bootdata_size);
 if (VAR_1 - VAR_2 != VAR_4.bootdata_preserved_size)
  FUNC_0(".boot.preserved.data section size mismatch");
 FUNC_1((void *)VAR_4.bootdata_preserved_off, VAR_2, VAR_4.bootdata_preserved_size);
}
