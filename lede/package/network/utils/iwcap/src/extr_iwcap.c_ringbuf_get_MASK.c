
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ringbuf_entry {scalar_t__ len; } ;
struct ringbuf {int fill; int len; int slen; struct ringbuf_entry* buf; } ;



struct ringbuf_entry * FUNC_0(struct ringbuf *VAR_0, int VAR_1)
{
 struct ringbuf_entry *VAR_2 = VAR_0->buf + (((VAR_0->fill + VAR_1) % VAR_0->len) * VAR_0->slen);

 if (VAR_2->len > 0)
  return VAR_2;

 return ((void*)0);
}
