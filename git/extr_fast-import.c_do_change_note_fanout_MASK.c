
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct tree_entry {struct tree_content* tree; TYPE_2__* versions; TYPE_1__* name; } ;
struct tree_content {unsigned int entry_count; struct tree_entry** entries; } ;
struct object_id {int dummy; } ;
struct TYPE_6__ {unsigned int hexsz; } ;
struct TYPE_5__ {int mode; int oid; } ;
struct TYPE_4__ {unsigned int str_len; int str_dat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned char,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,struct object_id*) ;
 int FUNC_4 (struct tree_entry*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_7 (struct tree_entry*,char*,struct tree_entry*,int ) ;
 int FUNC_8 (struct tree_entry*,char*,int *,int ,struct tree_content*) ;

__attribute__((used)) static uintmax_t FUNC_9(
  struct tree_entry *VAR_2, struct tree_entry *VAR_3,
  char *VAR_4, unsigned int VAR_5,
  char *VAR_6, unsigned int VAR_7,
  unsigned char VAR_8)
{
 struct tree_content *VAR_9;
 struct tree_entry *VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 uintmax_t VAR_15 = 0;
 struct object_id VAR_16;

 char VAR_17[VAR_0 + ((VAR_0 / 2) - 1) + 1];
 const unsigned VAR_18 = VAR_1->hexsz;

 if (!VAR_3->tree)
  FUNC_4(VAR_3);
 VAR_9 = VAR_3->tree;

 for (VAR_12 = 0; VAR_9 && VAR_12 < VAR_9->entry_count; VAR_12++) {
  VAR_10 = VAR_9->entries[VAR_12];
  VAR_13 = VAR_5 + VAR_10->name->str_len;
  VAR_14 = VAR_7;
  if (!VAR_10->versions[1].mode ||
      VAR_13 > VAR_18 ||
      VAR_10->name->str_len % 2)
   continue;


  FUNC_5(VAR_4 + VAR_5, VAR_10->name->str_dat,
         VAR_10->name->str_len);
  if (VAR_14)
   VAR_6[VAR_14++] = '/';
  FUNC_5(VAR_6 + VAR_14, VAR_10->name->str_dat,
         VAR_10->name->str_len);
  VAR_14 += VAR_10->name->str_len;
  VAR_6[VAR_14] = '\0';

  if (VAR_13 == VAR_18 && !FUNC_3(VAR_4, &VAR_16)) {

   if (VAR_8 == 0xff) {

    VAR_15++;
    continue;
   }
   FUNC_1(VAR_4, VAR_8, VAR_17);
   if (!FUNC_6(VAR_6, VAR_17)) {

    VAR_15++;
    continue;
   }


   if (!FUNC_7(VAR_2, VAR_6, &VAR_11, 0))
    FUNC_2("Failed to remove path %s", VAR_6);
   FUNC_8(VAR_2, VAR_17,
    &VAR_11.versions[1].oid,
    VAR_11.versions[1].mode,
    VAR_11.tree);
  } else if (FUNC_0(VAR_10->versions[1].mode)) {

   VAR_15 += FUNC_9(VAR_2, VAR_10,
    VAR_4, VAR_13,
    VAR_6, VAR_14, VAR_8);
  }


  VAR_9 = VAR_3->tree;
 }
 return VAR_15;
}
