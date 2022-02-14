
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pathlen; scalar_t__ path; } ;
struct tree_desc {void* buffer; unsigned long size; TYPE_1__ entry; } ;
struct strbuf {int dummy; } ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tree_desc*,void const*,unsigned long,struct strbuf*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct tree_desc *VAR_1, struct strbuf *VAR_2)
{
 const void *VAR_3 = VAR_1->buffer;
 const unsigned char *VAR_4 = (const unsigned char *)VAR_1->entry.path + VAR_1->entry.pathlen + 1 + VAR_0->rawsz;
 unsigned long VAR_5 = VAR_1->size;
 unsigned long VAR_6 = VAR_4 - (const unsigned char *)VAR_3;

 if (VAR_5 < VAR_6)
  FUNC_2(FUNC_0("too-short tree file"));
 VAR_3 = VAR_4;
 VAR_5 -= VAR_6;
 VAR_1->buffer = VAR_3;
 VAR_1->size = VAR_5;
 if (VAR_5)
  return FUNC_1(VAR_1, VAR_3, VAR_5, VAR_2);
 return 0;
}
