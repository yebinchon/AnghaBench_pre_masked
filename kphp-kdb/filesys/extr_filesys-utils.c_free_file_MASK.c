
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* filename; } ;
typedef TYPE_1__ file_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2 (file_t *VAR_0) {
  if (VAR_0->filename) {
    FUNC_1 (VAR_0->filename, FUNC_0 (VAR_0->filename) + 1);
  }
  FUNC_1 (VAR_0, sizeof (*VAR_0));
}
