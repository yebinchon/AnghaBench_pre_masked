
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; size_t len; int (* recv ) (TYPE_1__*) ;void* cb_data; scalar_t__ offset; } ;
typedef TYPE_1__ gitno_buffer ;


 int FUNC_0 (char*,int,size_t) ;

void FUNC_1(
 gitno_buffer *VAR_0,
 char *VAR_1,
 size_t VAR_2,
 int (*VAR_3)(gitno_buffer *VAR_4), void *VAR_5)
{
 FUNC_0(VAR_1, 0x0, VAR_2);
 VAR_0->data = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->offset = 0;
 VAR_0->recv = VAR_3;
 VAR_0->cb_data = VAR_5;
}
