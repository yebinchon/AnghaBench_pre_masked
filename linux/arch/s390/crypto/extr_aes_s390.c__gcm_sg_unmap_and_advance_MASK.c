
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcm_sg_walk {unsigned int walk_bytes_remain; int * walk_ptr; int walk; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct gcm_sg_walk *VAR_0,
          unsigned int VAR_1)
{
 VAR_0->walk_bytes_remain -= VAR_1;
 FUNC_2(&VAR_0->walk);
 FUNC_0(&VAR_0->walk, VAR_1);
 FUNC_1(&VAR_0->walk, 0, VAR_0->walk_bytes_remain);
 VAR_0->walk_ptr = ((void*)0);
}
