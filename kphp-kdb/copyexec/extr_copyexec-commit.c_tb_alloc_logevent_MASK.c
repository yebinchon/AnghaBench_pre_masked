
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_buffer {scalar_t__ p; scalar_t__ size; void* buff; } ;
struct lev_generic {int type; } ;
typedef int lev_type_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (void*,int ,long long) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void *FUNC_4 (struct transaction_buffer *VAR_0, lev_type_t VAR_1, long long VAR_2) {
  VAR_2 = (VAR_2 + 3) & -4;
  if (VAR_0->p + VAR_2 > VAR_0->size) {
    FUNC_3 (3, "B->p + size = %lld, B->size = %lld\n", VAR_0->p + VAR_2, VAR_0->size);
    FUNC_1 ("Transaction buffer too small (%lld), try increase it with -M command line switch.\n", VAR_0->size);
    FUNC_0 (1);
  }
  void *VAR_3 = VAR_0->buff + VAR_0->p;
  VAR_0->p += VAR_2;
  FUNC_2 (VAR_3, 0, VAR_2);
  struct lev_generic *VAR_4 = VAR_3;
  VAR_4->type = VAR_1;
  return VAR_3;
}
