
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; unsigned char* a; void* next; void* e; void* H; } ;
typedef TYPE_1__ diff_hashtable_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int,unsigned int) ;
 void* FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3 (diff_hashtable_t *VAR_0, unsigned char *VAR_1, int VAR_2) {
  VAR_0->size = FUNC_0 (VAR_2);
  VAR_0->a = VAR_1;
  unsigned VAR_3 = VAR_0->size * sizeof (VAR_0->H[0]);
  VAR_0->H = FUNC_2 (VAR_3);
  FUNC_1 (VAR_0->H, 0xff, VAR_3);
  VAR_3 = 4 * VAR_0->size;
  VAR_0->e = FUNC_2 (VAR_3);
  FUNC_1 (VAR_0->e, 0xff, VAR_3);
  VAR_3 = 4 * VAR_2;
  VAR_0->next = FUNC_2 (VAR_3);
  FUNC_1 (VAR_0->next, 0xff, VAR_3);
}
