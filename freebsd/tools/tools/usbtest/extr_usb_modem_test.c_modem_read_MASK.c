
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {int rx_bytes; } ;


 int FUNC_0 (char*,int *,size_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++) {
  FUNC_1(VAR_1[VAR_3], VAR_3);
 }

 FUNC_0("received", &VAR_0.rx_bytes, VAR_2);
}
