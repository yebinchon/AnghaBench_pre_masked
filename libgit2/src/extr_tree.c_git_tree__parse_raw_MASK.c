
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_5__ {char const* filename; int * oid; void* filename_len; void* attr; } ;
typedef TYPE_1__ git_tree_entry ;
struct TYPE_6__ {int entries; int * odb_obj; } ;
typedef TYPE_2__ git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (char const*,int ,int) ;
 scalar_t__ FUNC_5 (void**,char const*,int,char const**) ;
 int FUNC_6 (char*,int *) ;

int FUNC_7(void *VAR_3, const char *VAR_4, size_t VAR_5)
{
 git_tree *VAR_6 = VAR_3;
 const char *VAR_7;
 const char *VAR_8;

 VAR_7 = VAR_4;
 VAR_8 = VAR_7 + VAR_5;

 VAR_6->odb_obj = ((void*)0);
 FUNC_3(VAR_6->entries, VAR_0);
 FUNC_1(VAR_6->entries);

 while (VAR_7 < VAR_8) {
  git_tree_entry *VAR_9;
  size_t VAR_10;
  const char *VAR_11;
  uint16_t VAR_12;

  if (FUNC_5(&VAR_12, VAR_7, VAR_8 - VAR_7, &VAR_7) < 0 || !VAR_7)
   return FUNC_6("failed to parse tree: can't parse filemode", ((void*)0));

  if (VAR_7 >= VAR_8 || (*VAR_7++) != ' ')
   return FUNC_6("failed to parse tree: missing space after filemode", ((void*)0));

  if ((VAR_11 = FUNC_4(VAR_7, 0, VAR_8 - VAR_7)) == ((void*)0))
   return FUNC_6("failed to parse tree: object is corrupted", ((void*)0));

  if ((VAR_10 = VAR_11 - VAR_7) == 0 || VAR_10 > VAR_2)
   return FUNC_6("failed to parse tree: can't parse filename", ((void*)0));

  if ((VAR_8 - (VAR_11 + 1)) < VAR_1)
   return FUNC_6("failed to parse tree: can't parse OID", ((void*)0));


  {
   VAR_9 = FUNC_2(VAR_6->entries);
   FUNC_0(VAR_9);

   VAR_9->attr = VAR_12;
   VAR_9->filename_len = (uint16_t)VAR_10;
   VAR_9->filename = VAR_7;
   VAR_9->oid = (git_oid *) ((char *) VAR_7 + VAR_10 + 1);
  }

  VAR_7 += VAR_10 + 1;
  VAR_7 += VAR_1;
 }

 return 0;
}
