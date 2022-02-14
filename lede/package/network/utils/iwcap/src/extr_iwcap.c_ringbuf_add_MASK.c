
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct ringbuf_entry {int usec; int sec; } ;
struct ringbuf {int slen; int len; int fill; struct ringbuf_entry* buf; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct ringbuf_entry*,int ,int) ;

struct ringbuf_entry * FUNC_2(struct ringbuf *VAR_0)
{
 struct timeval VAR_1;
 struct ringbuf_entry *VAR_2;

 FUNC_0(&VAR_1, ((void*)0));

 VAR_2 = VAR_0->buf + (VAR_0->fill++ * VAR_0->slen);
 VAR_0->fill %= VAR_0->len;

 FUNC_1(VAR_2, 0, VAR_0->slen);

 VAR_2->sec = VAR_1.tv_sec;
 VAR_2->usec = VAR_1.tv_usec;

 return VAR_2;
}
