
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ringbuf_entry {int dummy; } ;
struct ringbuf {int len; int slen; scalar_t__ buf; scalar_t__ fill; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

struct ringbuf * FUNC_2(uint32_t VAR_0, uint16_t VAR_1)
{
 static struct ringbuf VAR_2;

 if (VAR_1 <= 0)
  return ((void*)0);

 VAR_2.buf = FUNC_0(VAR_0 * (VAR_1 + sizeof(struct ringbuf_entry)));

 if (VAR_2.buf)
 {
  VAR_2.len = VAR_0;
  VAR_2.fill = 0;
  VAR_2.slen = (VAR_1 + sizeof(struct ringbuf_entry));

  FUNC_1(VAR_2.buf, 0, VAR_0 * VAR_1);

  return &VAR_2;
 }

 return ((void*)0);
}
