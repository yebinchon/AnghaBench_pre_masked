
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ size_hint; } ;
struct TYPE_6__ {TYPE_1__ params; } ;
typedef TYPE_2__ BrotliEncoderState ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(BrotliEncoderState* VAR_0, size_t VAR_1) {
  if (VAR_0->params.size_hint == 0) {
    uint64_t VAR_2 = FUNC_0(VAR_0);
    uint64_t VAR_3 = VAR_1;
    uint32_t VAR_4 = 1u << 30;
    uint32_t VAR_5;
    if ((VAR_2 >= VAR_4) || (VAR_3 >= VAR_4) || ((VAR_2 + VAR_3) >= VAR_4)) {
      VAR_5 = VAR_4;
    } else {
      VAR_5 = (uint32_t)(VAR_2 + VAR_3);
    }
    VAR_0->params.size_hint = VAR_5;
  }
}
