
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; size_t len; int * cb_data; int recv; scalar_t__ offset; } ;
typedef TYPE_1__ gitno_buffer ;
typedef int git_stream ;


 int FUNC_0 (char*,int,size_t) ;
 int VAR_0 ;

void FUNC_1(git_stream *VAR_1, gitno_buffer *VAR_2, char *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_3, 0x0, VAR_4);
 VAR_2->data = VAR_3;
 VAR_2->len = VAR_4;
 VAR_2->offset = 0;
 VAR_2->recv = VAR_0;
 VAR_2->cb_data = VAR_1;
}
