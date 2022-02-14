
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int P; } ;
struct TYPE_5__ {int finalised; TYPE_1__ cmac; } ;
typedef TYPE_2__ cf_cmac_stream ;


 int FUNC_0 (TYPE_2__*,int const*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const uint8_t *VAR_1)
{
  cf_cmac_stream *VAR_2 = VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_2->cmac.P);
  VAR_2->finalised = 1;
}
