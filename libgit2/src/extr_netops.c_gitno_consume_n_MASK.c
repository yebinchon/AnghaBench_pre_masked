
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ gitno_buffer ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int,scalar_t__) ;

void FUNC_2(gitno_buffer *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0->data, VAR_0->data + VAR_1, VAR_0->len - VAR_0->offset);
 FUNC_1(VAR_0->data + VAR_1, 0x0, VAR_0->len - VAR_0->offset);
 VAR_0->offset -= VAR_1;
}
