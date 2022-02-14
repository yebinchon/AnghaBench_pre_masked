
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tree_entry {TYPE_3__* versions; TYPE_1__* name; } ;
struct tree_content {unsigned int entry_count; struct tree_entry** entries; } ;
struct strbuf {int dummy; } ;
struct TYPE_8__ {int rawsz; } ;
struct TYPE_6__ {int hash; } ;
struct TYPE_7__ {int mode; TYPE_2__ oid; } ;
struct TYPE_5__ {int str_dat; scalar_t__ str_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct tree_entry**,unsigned int,int ) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 (struct strbuf*,char*,unsigned int,int ,char) ;
 int FUNC_3 (struct strbuf*,size_t) ;
 int FUNC_4 (struct strbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static void FUNC_5(struct tree_content *VAR_4, int VAR_5, struct strbuf *VAR_6)
{
 size_t VAR_7 = 0;
 unsigned int VAR_8;

 if (!VAR_5)
  FUNC_0(VAR_4->entries, VAR_4->entry_count, VAR_1);
 else
  FUNC_0(VAR_4->entries, VAR_4->entry_count, VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_4->entry_count; VAR_8++) {
  if (VAR_4->entries[VAR_8]->versions[VAR_5].mode)
   VAR_7 += VAR_4->entries[VAR_8]->name->str_len + 34;
 }

 FUNC_4(VAR_6);
 FUNC_3(VAR_6, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_4->entry_count; VAR_8++) {
  struct tree_entry *VAR_9 = VAR_4->entries[VAR_8];
  if (!VAR_9->versions[VAR_5].mode)
   continue;
  FUNC_2(VAR_6, "%o %s%c",
   (unsigned int)(VAR_9->versions[VAR_5].mode & ~VAR_0),
   VAR_9->name->str_dat, '\0');
  FUNC_1(VAR_6, VAR_9->versions[VAR_5].oid.hash, VAR_3->rawsz);
 }
}
