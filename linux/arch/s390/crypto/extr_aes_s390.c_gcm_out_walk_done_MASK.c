
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcm_sg_walk {int * buf; int walk_ptr; int walk_bytes; int * ptr; } ;


 int FUNC_0 (struct gcm_sg_walk*) ;
 int FUNC_1 (struct gcm_sg_walk*,unsigned int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gcm_sg_walk *VAR_0, unsigned int VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0->ptr == ((void*)0))
  return 0;

 if (VAR_0->ptr == VAR_0->buf) {
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += VAR_3) {
   if (!FUNC_0(VAR_0))
    return VAR_2;
   VAR_3 = FUNC_3(VAR_0->walk_bytes, VAR_1 - VAR_2);
   FUNC_2(VAR_0->walk_ptr, VAR_0->buf + VAR_2, VAR_3);
   FUNC_1(VAR_0, VAR_3);
  }
 } else
  FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
