
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh_ctx {void* g; void* q; void* p; } ;
struct dh {int p_size; int q_size; int g_size; scalar_t__ g; scalar_t__ q; scalar_t__ p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct dh_ctx *VAR_1, struct dh *VAR_2)
{
 if (FUNC_0(VAR_2->p_size << 3))
  return -VAR_0;

 VAR_1->p = FUNC_1(VAR_2->p, VAR_2->p_size);
 if (!VAR_1->p)
  return -VAR_0;

 if (VAR_2->q && VAR_2->q_size) {
  VAR_1->q = FUNC_1(VAR_2->q, VAR_2->q_size);
  if (!VAR_1->q)
   return -VAR_0;
 }

 VAR_1->g = FUNC_1(VAR_2->g, VAR_2->g_size);
 if (!VAR_1->g)
  return -VAR_0;

 return 0;
}
