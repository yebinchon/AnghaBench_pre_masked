
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {unsigned long size; void const* buffer; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct tree_desc*,void const*,unsigned long,struct strbuf*) ;

__attribute__((used)) static int FUNC_1(struct tree_desc *VAR_0, const void *VAR_1, unsigned long VAR_2, struct strbuf *VAR_3)
{
 VAR_0->buffer = VAR_1;
 VAR_0->size = VAR_2;
 if (VAR_2)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return 0;
}
