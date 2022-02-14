
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcm_sg_walk {scalar_t__ walk_bytes_remain; int nbytes; unsigned int walk_bytes; int * buf; int * ptr; int * walk_ptr; int walk; } ;


 int FUNC_0 (struct gcm_sg_walk*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gcm_sg_walk *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->walk_bytes_remain == 0) {
  VAR_0->ptr = ((void*)0);
  VAR_0->nbytes = 0;
  goto out;
 }

 if (!FUNC_0(VAR_0)) {
  VAR_0->ptr = ((void*)0);
  VAR_0->nbytes = 0;
  goto out;
 }

 if (VAR_0->walk_bytes >= VAR_1) {
  VAR_0->ptr = VAR_0->walk_ptr;
  VAR_0->nbytes = VAR_0->walk_bytes;
  goto out;
 }

 FUNC_1(&VAR_0->walk);
 VAR_0->walk_ptr = ((void*)0);

 VAR_0->ptr = VAR_0->buf;
 VAR_0->nbytes = sizeof(VAR_0->buf);

out:
 return VAR_0->nbytes;
}
