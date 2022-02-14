
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct rerere_io_file {int input; } ;
struct rerere_io {int dummy; } ;


 int FUNC_0 (struct strbuf*,int ,char) ;

__attribute__((used)) static int FUNC_1(struct strbuf *VAR_0, struct rerere_io *VAR_1)
{
 struct rerere_io_file *VAR_2 = (struct rerere_io_file *)VAR_1;
 return FUNC_0(VAR_0, VAR_2->input, '\n');
}
