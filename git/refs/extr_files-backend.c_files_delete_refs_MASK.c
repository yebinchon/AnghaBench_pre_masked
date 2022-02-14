
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {char* buf; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int base; int packed_ref_store; } ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 struct files_ref_store* FUNC_2 (struct ref_store*,int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ,struct strbuf*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char const*,char const*,int *,unsigned int) ;
 scalar_t__ FUNC_6 (int ,char const*,struct string_list*,unsigned int) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static int FUNC_8(struct ref_store *VAR_2, const char *VAR_3,
        struct string_list *VAR_4, unsigned int VAR_5)
{
 struct files_ref_store *VAR_6 =
  FUNC_2(VAR_2, VAR_0, "delete_refs");
 struct strbuf VAR_7 = VAR_1;
 int VAR_8, VAR_9 = 0;

 if (!VAR_4->nr)
  return 0;

 if (FUNC_3(VAR_6->packed_ref_store, 0, &VAR_7))
  goto error;

 if (FUNC_6(VAR_6->packed_ref_store, VAR_3, VAR_4, VAR_5)) {
  FUNC_4(VAR_6->packed_ref_store);
  goto error;
 }

 FUNC_4(VAR_6->packed_ref_store);

 for (VAR_8 = 0; VAR_8 < VAR_4->nr; VAR_8++) {
  const char *VAR_10 = VAR_4->items[VAR_8].string;

  if (FUNC_5(&VAR_6->base, VAR_3, VAR_10, ((void*)0), VAR_5))
   VAR_9 |= FUNC_1(FUNC_0("could not remove reference %s"), VAR_10);
 }

 FUNC_7(&VAR_7);
 return VAR_9;

error:






 if (VAR_4->nr == 1)
  FUNC_1(FUNC_0("could not delete reference %s: %s"),
        VAR_4->items[0].string, VAR_7.buf);
 else
  FUNC_1(FUNC_0("could not delete references: %s"), VAR_7.buf);

 FUNC_7(&VAR_7);
 return -1;
}
