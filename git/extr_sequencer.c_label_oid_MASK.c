
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct string_entry {char const* string; TYPE_2__ entry; } ;
struct strbuf {char* buf; } ;
struct object_id {int dummy; } ;
struct labels_entry {char const* string; TYPE_2__ entry; } ;
struct label_state {int commit2label; int labels; struct strbuf buf; } ;
struct TYPE_4__ {size_t hexsz; } ;


 int FUNC_0 (struct string_entry*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,struct object_id*,int ) ;
 int FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (char*,struct object_id*) ;
 int FUNC_7 (int *,struct object_id*) ;
 struct string_entry* FUNC_8 (int *,struct object_id*) ;
 int FUNC_9 (int *,struct string_entry*) ;
 int FUNC_10 (struct strbuf*,char const*,size_t) ;
 int FUNC_11 (struct strbuf*,char*,int) ;
 int FUNC_12 (struct strbuf*,int ) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*,size_t) ;
 int FUNC_15 (char const*) ;
 char const* VAR_2 ;
 int FUNC_16 (char const*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static const char *FUNC_17(struct object_id *VAR_4, const char *VAR_5,
        struct label_state *VAR_6)
{
 struct labels_entry *VAR_7;
 struct string_entry *VAR_8;
 struct object_id VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8(&VAR_6->commit2label, VAR_4);
 if (VAR_8)
  return VAR_8->string;
 if (!VAR_5) {
  char *VAR_12;

  FUNC_13(&VAR_6->buf);
  FUNC_12(&VAR_6->buf, VAR_0);
  VAR_5 = VAR_12 = VAR_6->buf.buf;

  FUNC_1(VAR_12, VAR_4, VAR_1);





  if (FUNC_5(&VAR_6->labels, FUNC_15(VAR_12), VAR_12)) {
   size_t VAR_13 = FUNC_16(VAR_12) + 1;

   FUNC_6(VAR_12, VAR_4);
   for (; VAR_13 < VAR_3->hexsz; VAR_13++) {
    char VAR_14 = VAR_12[VAR_13];
    VAR_12[VAR_13] = '\0';
    if (!FUNC_5(&VAR_6->labels,
          FUNC_15(VAR_12), VAR_12))
     break;
    VAR_12[VAR_13] = VAR_14;
   }
  }
 } else if (((VAR_10 = FUNC_16(VAR_5)) == VAR_3->hexsz &&
      !FUNC_2(VAR_5, &VAR_9)) ||
     (VAR_10 == 1 && *VAR_5 == '#') ||
     FUNC_5(&VAR_6->labels,
      FUNC_15(VAR_5), VAR_5)) {






  struct strbuf *VAR_15 = &VAR_6->buf;

  FUNC_13(VAR_15);
  FUNC_10(VAR_15, VAR_5, VAR_10);

  for (VAR_11 = 2; ; VAR_11++) {
   FUNC_14(VAR_15, VAR_10);
   FUNC_11(VAR_15, "-%d", VAR_11);
   if (!FUNC_5(&VAR_6->labels,
         FUNC_15(VAR_15->buf),
         VAR_15->buf))
    break;
  }

  VAR_5 = VAR_15->buf;
 }

 FUNC_0(VAR_7, VAR_5, VAR_5);
 FUNC_4(&VAR_7->entry, FUNC_15(VAR_5));
 FUNC_3(&VAR_6->labels, &VAR_7->entry);

 FUNC_0(VAR_8, VAR_2, VAR_5);
 FUNC_7(&VAR_8->entry.oid, VAR_4);
 FUNC_9(&VAR_6->commit2label, VAR_8);

 return VAR_8->string;
}
