
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {size_t pwrite; size_t size; scalar_t__ data; } ;
typedef size_t ssize_t ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;
 int FUNC_1 (size_t*,size_t) ;

ssize_t FUNC_2(struct dvb_ringbuffer *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 size_t VAR_4;

 VAR_4 = (VAR_0->pwrite + VAR_2 > VAR_0->size) ? VAR_0->size - VAR_0->pwrite : 0;

 if (VAR_4 > 0) {
  FUNC_0(VAR_0->data+VAR_0->pwrite, VAR_1, VAR_4);
  VAR_1 += VAR_4;
  VAR_3 -= VAR_4;





  FUNC_1(&VAR_0->pwrite, 0);
 }
 FUNC_0(VAR_0->data+VAR_0->pwrite, VAR_1, VAR_3);

 FUNC_1(&VAR_0->pwrite, (VAR_0->pwrite + VAR_3) % VAR_0->size);

 return VAR_2;
}
