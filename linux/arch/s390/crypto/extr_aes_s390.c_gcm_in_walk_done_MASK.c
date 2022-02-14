
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcm_sg_walk {unsigned int buf_bytes; int * buf; int * ptr; } ;


 int FUNC_0 (struct gcm_sg_walk*,unsigned int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct gcm_sg_walk *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->ptr == ((void*)0))
  return 0;

 if (VAR_0->ptr == VAR_0->buf) {
  int VAR_2 = VAR_0->buf_bytes - VAR_1;
  if (VAR_2 > 0) {
   FUNC_1(VAR_0->buf, VAR_0->buf + VAR_1, VAR_2);
   VAR_0->buf_bytes = VAR_2;
  } else
   VAR_0->buf_bytes = 0;
 } else
  FUNC_0(VAR_0, VAR_1);

 return VAR_1;
}
