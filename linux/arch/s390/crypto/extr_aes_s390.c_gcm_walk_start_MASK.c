
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct gcm_sg_walk {unsigned int walk_bytes_remain; int walk; } ;


 int FUNC_0 (struct gcm_sg_walk*,int ,int) ;
 int FUNC_1 (int *,struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct gcm_sg_walk *VAR_0, struct scatterlist *VAR_1,
      unsigned int VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->walk_bytes_remain = VAR_2;
 FUNC_1(&VAR_0->walk, VAR_1);
}
