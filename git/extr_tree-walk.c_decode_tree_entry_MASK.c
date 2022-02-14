
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash; } ;
struct TYPE_5__ {char const* path; unsigned int pathlen; TYPE_1__ oid; int mode; } ;
struct tree_desc {TYPE_2__ entry; } ;
struct strbuf {int dummy; } ;
struct TYPE_6__ {unsigned int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int) ;
 char* FUNC_2 (char const*,unsigned int*) ;
 int FUNC_3 (int ,unsigned char const*) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (char const*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_6(struct tree_desc *VAR_1, const char *VAR_2, unsigned long VAR_3, struct strbuf *VAR_4)
{
 const char *VAR_5;
 unsigned int VAR_6, VAR_7;
 const unsigned VAR_8 = VAR_0->rawsz;

 if (VAR_3 < VAR_8 + 3 || VAR_2[VAR_3 - (VAR_8 + 1)]) {
  FUNC_4(VAR_4, FUNC_0("too-short tree object"));
  return -1;
 }

 VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (!VAR_5) {
  FUNC_4(VAR_4, FUNC_0("malformed mode in tree entry"));
  return -1;
 }
 if (!*VAR_5) {
  FUNC_4(VAR_4, FUNC_0("empty filename in tree entry"));
  return -1;
 }
 VAR_7 = FUNC_5(VAR_5) + 1;


 VAR_1->entry.path = VAR_5;
 VAR_1->entry.mode = FUNC_1(VAR_6);
 VAR_1->entry.pathlen = VAR_7 - 1;
 FUNC_3(VAR_1->entry.oid.hash, (const unsigned char *)VAR_5 + VAR_7);

 return 0;
}
