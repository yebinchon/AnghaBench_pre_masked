
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atom_context {int scratch_mutex; } ;


 int FUNC_0 (struct atom_context*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct atom_context *VAR_0, int VAR_1, uint32_t * VAR_2)
{
 int VAR_3;
 FUNC_1(&VAR_0->scratch_mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->scratch_mutex);
 return VAR_3;
}
