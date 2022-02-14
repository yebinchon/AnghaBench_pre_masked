
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ creation_time; int pid; } ;
typedef TYPE_1__ transaction_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (transaction_t *VAR_0) {
  return VAR_0->creation_time && (VAR_0->creation_time == FUNC_0 (VAR_0->pid));
}
