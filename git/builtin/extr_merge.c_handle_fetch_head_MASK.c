
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; char* buf; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_4__ {struct commit_list* next; } ;
struct TYPE_3__ {unsigned int hexsz; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct commit*,struct commit_list**) ;
 int FUNC_3 (int ,char const*,char*) ;
 int FUNC_4 (int ,char const*) ;
 struct commit* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,struct object_id*) ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char const*,int ) ;
 scalar_t__ FUNC_10 (struct strbuf*,int,int ) ;
 int FUNC_11 (struct strbuf*) ;
 char* FUNC_12 (char*,char) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(struct commit_list **VAR_4, struct strbuf *VAR_5)
{
 const char *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct strbuf VAR_10 = VAR_1;
 const unsigned VAR_11 = VAR_2->hexsz;

 if (!VAR_5)
  VAR_5 = &VAR_10;

 VAR_6 = FUNC_7(VAR_3);
 VAR_7 = FUNC_9(VAR_6, VAR_0);
 if (VAR_7 < 0)
  FUNC_4(FUNC_0("could not open '%s' for reading"), VAR_6);

 if (FUNC_10(VAR_5, VAR_7, 0) < 0)
  FUNC_4(FUNC_0("could not read '%s'"), VAR_6);
 if (FUNC_1(VAR_7) < 0)
  FUNC_4(FUNC_0("could not close '%s'"), VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_5->len; VAR_8 = VAR_9) {
  struct object_id VAR_12;
  char *VAR_13;
  struct commit *VAR_14;

  VAR_13 = FUNC_12(VAR_5->buf + VAR_8, '\n');
  if (VAR_13)
   VAR_9 = VAR_13 - VAR_5->buf + 1;
  else
   VAR_9 = VAR_5->len;

  if (VAR_9 - VAR_8 < VAR_11 + 2 ||
      FUNC_6(VAR_5->buf + VAR_8, &VAR_12))
   VAR_14 = ((void*)0);
  else if (FUNC_8(VAR_5->buf + VAR_8 + VAR_11, "\t\t", 2))
   continue;
  else {
   char VAR_15 = VAR_5->buf[VAR_8 + VAR_11];
   VAR_5->buf[VAR_8 + VAR_11] = '\0';
   VAR_14 = FUNC_5(VAR_5->buf + VAR_8);
   VAR_5->buf[VAR_8 + VAR_11] = VAR_15;
  }
  if (!VAR_14) {
   if (VAR_13)
    *VAR_13 = '\0';
   FUNC_3(FUNC_0("not something we can merge in %s: %s"),
       VAR_6, VAR_5->buf + VAR_8);
  }
  VAR_4 = &FUNC_2(VAR_14, VAR_4)->next;
 }

 if (VAR_5 == &VAR_10)
  FUNC_11(&VAR_10);
}
