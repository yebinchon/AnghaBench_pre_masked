
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int uma_zone_t ;
typedef int uint8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void *
FUNC_2(uma_zone_t VAR_1, vm_size_t VAR_2, int VAR_3, uint8_t *VAR_4,
    int VAR_5)
{
 void *VAR_6;

 *VAR_4 = VAR_0;
 VAR_6 = (void *)FUNC_1(FUNC_0(VAR_3), VAR_2, VAR_5);

 return (VAR_6);
}
