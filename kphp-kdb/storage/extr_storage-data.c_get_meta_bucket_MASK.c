
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
typedef TYPE_1__ metafile_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0 (metafile_t *VAR_1) {
  int VAR_2 = 0;
  if (VAR_1->size > 65536 + VAR_0) {
    VAR_2++;
  }
  return VAR_2;
}
