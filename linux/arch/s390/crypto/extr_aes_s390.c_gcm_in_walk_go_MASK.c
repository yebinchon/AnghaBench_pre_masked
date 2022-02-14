
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcm_sg_walk {unsigned int buf_bytes; unsigned int nbytes; scalar_t__ walk_bytes_remain; unsigned int walk_bytes; int * ptr; int * buf; int * walk_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gcm_sg_walk*) ;
 int FUNC_1 (struct gcm_sg_walk*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gcm_sg_walk *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_1->buf_bytes && VAR_1->buf_bytes >= VAR_2) {
  VAR_1->ptr = VAR_1->buf;
  VAR_1->nbytes = VAR_1->buf_bytes;
  goto out;
 }

 if (VAR_1->walk_bytes_remain == 0) {
  VAR_1->ptr = ((void*)0);
  VAR_1->nbytes = 0;
  goto out;
 }

 if (!FUNC_0(VAR_1)) {
  VAR_1->ptr = ((void*)0);
  VAR_1->nbytes = 0;
  goto out;
 }

 if (!VAR_1->buf_bytes && VAR_1->walk_bytes >= VAR_2) {
  VAR_1->ptr = VAR_1->walk_ptr;
  VAR_1->nbytes = VAR_1->walk_bytes;
  goto out;
 }

 while (1) {
  VAR_3 = FUNC_3(VAR_1->walk_bytes, VAR_0 - VAR_1->buf_bytes);
  FUNC_2(VAR_1->buf + VAR_1->buf_bytes, VAR_1->walk_ptr, VAR_3);
  VAR_1->buf_bytes += VAR_3;
  FUNC_1(VAR_1, VAR_3);
  if (VAR_1->buf_bytes >= VAR_2) {
   VAR_1->ptr = VAR_1->buf;
   VAR_1->nbytes = VAR_1->buf_bytes;
   goto out;
  }
  if (!FUNC_0(VAR_1)) {
   VAR_1->ptr = ((void*)0);
   VAR_1->nbytes = 0;
   goto out;
  }
 }

out:
 return VAR_1->nbytes;
}
