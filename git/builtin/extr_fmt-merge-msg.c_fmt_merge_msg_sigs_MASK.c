
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {int string; struct object_id* util; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct strbuf*,struct strbuf*,char*,unsigned long) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_2 ;
 unsigned long FUNC_2 (char*,unsigned long) ;
 char* FUNC_3 (struct object_id*,int*,unsigned long*) ;
 int FUNC_4 (struct strbuf*,int ,int ) ;
 int FUNC_5 (struct strbuf*,struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*,int ,int ,scalar_t__) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,unsigned long,char*,unsigned long,struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_12(struct strbuf *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 struct strbuf VAR_7 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2.nr; VAR_4++) {
  struct object_id *VAR_8 = VAR_2.items[VAR_4].util;
  enum object_type VAR_9;
  unsigned long VAR_10, VAR_11;
  char *VAR_12 = FUNC_3(VAR_8, &VAR_9, &VAR_10);
  struct strbuf VAR_13 = VAR_1;

  if (!VAR_12 || VAR_9 != VAR_0)
   goto next;
  VAR_11 = FUNC_2(VAR_12, VAR_10);

  if (VAR_10 == VAR_11)
   ;
  else if (FUNC_11(VAR_12, VAR_11, VAR_12 + VAR_11, VAR_10 - VAR_11, &VAR_13, ((void*)0))) {
   if (!VAR_13.len)
    FUNC_7(&VAR_13, "gpg verification failed.\n");
  }

  if (!VAR_5++) {
   FUNC_0(&VAR_7, &VAR_13, VAR_12, VAR_11);
   VAR_6 = VAR_4;
  } else {
   if (VAR_5 == 2) {
    struct strbuf VAR_14 = VAR_1;
    FUNC_6(&VAR_14, '\n');
    FUNC_4(&VAR_14,
      VAR_2.items[VAR_6].string,
      FUNC_10(VAR_2.items[VAR_6].string));
    FUNC_8(&VAR_7, 0, VAR_14.buf,
           VAR_14.len);
    FUNC_9(&VAR_14);
   }
   FUNC_6(&VAR_7, '\n');
   FUNC_4(&VAR_7,
     VAR_2.items[VAR_4].string,
     FUNC_10(VAR_2.items[VAR_4].string));
   FUNC_0(&VAR_7, &VAR_13, VAR_12, VAR_11);
  }
  FUNC_9(&VAR_13);
 next:
  FUNC_1(VAR_12);
 }
 if (VAR_7.len) {
  FUNC_6(VAR_3, '\n');
  FUNC_5(VAR_3, &VAR_7);
 }
 FUNC_9(&VAR_7);
}
