
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {int data; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct dvb_ringbuffer*) ;
 int FUNC_2 (struct dvb_ringbuffer*,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct dvb_ringbuffer *VAR_1,
       const u8 *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 if (!VAR_3)
  return 0;
 if (!VAR_1->data)
  return 0;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_3 > VAR_4) {
  FUNC_0("buffer overflow\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
