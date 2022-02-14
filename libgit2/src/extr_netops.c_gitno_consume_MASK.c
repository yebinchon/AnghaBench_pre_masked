
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; int len; int offset; } ;
typedef TYPE_1__ gitno_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*,int,int) ;

void FUNC_3(gitno_buffer *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 FUNC_0(VAR_1 - VAR_0->data >= 0);
 FUNC_0(VAR_1 - VAR_0->data <= (int) VAR_0->len);

 VAR_2 = VAR_1 - VAR_0->data;

 FUNC_1(VAR_0->data, VAR_1, VAR_0->offset - VAR_2);
 FUNC_2(VAR_0->data + VAR_0->offset, 0x0, VAR_0->len - VAR_0->offset);
 VAR_0->offset -= VAR_2;
}
