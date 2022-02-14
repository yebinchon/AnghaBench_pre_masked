
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* y; int n; int p; } ;
typedef TYPE_1__ suffix_array_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char*,int,unsigned char*) ;

void FUNC_4 (suffix_array_t *VAR_0, unsigned char *VAR_1, int VAR_2) {
  FUNC_3 (3, "suffix_array_init (%.*s)\n", VAR_2, VAR_1);
  VAR_0->y = VAR_1;
  VAR_0->n = VAR_2;
  VAR_0->p = FUNC_0 (4 * VAR_2);
  FUNC_2 (VAR_0);
  FUNC_1 (VAR_0);
}
