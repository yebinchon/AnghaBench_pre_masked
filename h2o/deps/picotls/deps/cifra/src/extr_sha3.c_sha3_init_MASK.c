
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int rate; int capacity; } ;
typedef TYPE_1__ cf_sha3_context ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(cf_sha3_context *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
  FUNC_0(VAR_0, sizeof *VAR_0);
  VAR_0->rate = VAR_1 / 8;
  VAR_0->capacity = VAR_2 / 8;
}
