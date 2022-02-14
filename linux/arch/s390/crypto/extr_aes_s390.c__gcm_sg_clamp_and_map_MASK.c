
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_4__ {int sg; } ;
struct gcm_sg_walk {unsigned int walk_bytes; TYPE_1__ walk; int walk_ptr; int walk_bytes_remain; } ;


 void* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct scatterlist*) ;
 struct scatterlist* FUNC_3 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_4(struct gcm_sg_walk *VAR_0)
{
 struct scatterlist *VAR_1;

 VAR_0->walk_bytes = FUNC_0(&VAR_0->walk, VAR_0->walk_bytes_remain);
 while (!VAR_0->walk_bytes) {
  VAR_1 = FUNC_3(VAR_0->walk.sg);
  if (!VAR_1)
   return 0;
  FUNC_2(&VAR_0->walk, VAR_1);
  VAR_0->walk_bytes = FUNC_0(&VAR_0->walk,
         VAR_0->walk_bytes_remain);
 }
 VAR_0->walk_ptr = FUNC_1(&VAR_0->walk);
 return VAR_0->walk_bytes;
}
