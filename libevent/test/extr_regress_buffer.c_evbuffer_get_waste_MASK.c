
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; scalar_t__ buffer_len; scalar_t__ misalign; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain* first; } ;



__attribute__((used)) static void
FUNC_0(struct evbuffer *VAR_0, size_t *VAR_1, size_t *VAR_2, size_t *VAR_3)
{
 struct evbuffer_chain *VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;
 VAR_7 = VAR_5 = VAR_6 = 0;

 VAR_4 = VAR_0->first;

 while (VAR_4 && VAR_4->off==0) {
  ++VAR_8;
  VAR_5 += VAR_4->buffer_len;
  VAR_4 = VAR_4->next;
 }

 if (VAR_4) {
  ++VAR_8;
  VAR_5 += VAR_4->buffer_len;
  VAR_7 += VAR_4->off;
  if (VAR_4->next && VAR_4->next->off)
   VAR_6 += (size_t)(VAR_4->buffer_len - (VAR_4->misalign + VAR_4->off));
  VAR_4 = VAR_4->next;
 }

 while (VAR_4 && VAR_4->off) {
  ++VAR_8;
  VAR_5 += VAR_4->buffer_len;
  VAR_6 += (size_t)VAR_4->misalign;
  VAR_7 += VAR_4->off;
  if (VAR_4->next && VAR_4->next->off)
   VAR_6 += (size_t) (VAR_4->buffer_len - (VAR_4->misalign + VAR_4->off));
  VAR_4 = VAR_4->next;
 }

 while (VAR_4) {
  ++VAR_8;
  VAR_5 += VAR_4->buffer_len;
 }
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;
}
