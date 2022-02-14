
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_2__ rotate_to; int S; } ;
typedef TYPE_1__ file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1 (file_t *VAR_1) {
  if (FUNC_0 (&VAR_1->S, &VAR_1->rotate_to) < 0) {
    return -1;
  }

  if (VAR_1->rotate_to.type != VAR_0) {
    return -1;
  }

  return 0;
}
