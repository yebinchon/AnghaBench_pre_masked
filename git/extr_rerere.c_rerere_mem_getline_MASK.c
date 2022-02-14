
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {size_t len; char* buf; } ;
struct rerere_io_mem {TYPE_1__ input; } ;
struct rerere_io {int dummy; } ;


 char* FUNC_0 (char*,char,size_t) ;
 int FUNC_1 (struct strbuf*,char*,size_t) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_0, struct rerere_io *VAR_1)
{
 struct rerere_io_mem *VAR_2 = (struct rerere_io_mem *)VAR_1;
 char *VAR_3;
 size_t VAR_4;

 FUNC_2(VAR_0);
 if (!VAR_2->input.len)
  return -1;
 VAR_3 = FUNC_0(VAR_2->input.buf, '\n', VAR_2->input.len);
 if (!VAR_3)
  VAR_3 = VAR_2->input.buf + VAR_2->input.len;
 else if (*VAR_3 == '\n')
  VAR_3++;
 VAR_4 = VAR_3 - VAR_2->input.buf;
 FUNC_1(VAR_0, VAR_2->input.buf, VAR_4);
 FUNC_3(&VAR_2->input, 0, VAR_4);
 return 0;
}
