
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {struct resolve_undo_info* util; } ;
struct string_list {int strdup_strings; } ;
struct resolve_undo_info {int * oid; int * mode; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (struct string_list*,int) ;
 struct string_list_item* FUNC_3 (struct string_list*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char**,int) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_6 (int,int) ;

struct string_list *FUNC_7(const char *VAR_1, unsigned long VAR_2)
{
 struct string_list *VAR_3;
 size_t VAR_4;
 char *VAR_5;
 int VAR_6;
 const unsigned VAR_7 = VAR_0->rawsz;

 VAR_3 = FUNC_6(1, sizeof(*VAR_3));
 VAR_3->strdup_strings = 1;

 while (VAR_2) {
  struct string_list_item *VAR_8;
  struct resolve_undo_info *VAR_9;

  VAR_4 = FUNC_4(VAR_1) + 1;
  if (VAR_2 <= VAR_4)
   goto error;
  VAR_8 = FUNC_3(VAR_3, VAR_1);
  if (!VAR_8->util)
   VAR_8->util = FUNC_6(1, sizeof(*VAR_9));
  VAR_9 = VAR_8->util;
  VAR_2 -= VAR_4;
  VAR_1 += VAR_4;

  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   VAR_9->mode[VAR_6] = FUNC_5(VAR_1, &VAR_5, 8);
   if (!VAR_5 || VAR_5 == VAR_1 || *VAR_5)
    goto error;
   VAR_4 = (VAR_5 + 1) - (char*)VAR_1;
   if (VAR_2 <= VAR_4)
    goto error;
   VAR_2 -= VAR_4;
   VAR_1 += VAR_4;
  }

  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   if (!VAR_9->mode[VAR_6])
    continue;
   if (VAR_2 < VAR_7)
    goto error;
   FUNC_1(&VAR_9->oid[VAR_6], (const unsigned char *)VAR_1);
   VAR_2 -= VAR_7;
   VAR_1 += VAR_7;
  }
 }
 return VAR_3;

error:
 FUNC_2(VAR_3, 1);
 FUNC_0("Index records invalid resolve-undo information");
 return ((void*)0);
}
