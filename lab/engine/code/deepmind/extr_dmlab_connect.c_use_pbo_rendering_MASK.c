
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enabled; scalar_t__ supported; } ;
struct TYPE_5__ {TYPE_1__ pbos; } ;
typedef TYPE_2__ GameContext ;



__attribute__((used)) static bool FUNC_0(GameContext* VAR_0) {
  return VAR_0->pbos.supported && VAR_0->pbos.enabled;
}
