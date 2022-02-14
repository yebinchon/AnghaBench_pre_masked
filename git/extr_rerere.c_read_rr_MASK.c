
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {unsigned int const len; char* buf; } ;
struct rerere_id {int variant; } ;
struct repository {int dummy; } ;
struct TYPE_4__ {struct rerere_id* util; } ;
struct TYPE_3__ {unsigned int hexsz; } ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*,unsigned char*) ;
 int FUNC_5 (struct repository*) ;
 struct rerere_id* FUNC_6 (char*) ;
 int FUNC_7 (struct strbuf*,int *,char) ;
 int FUNC_8 (struct strbuf*) ;
 TYPE_2__* FUNC_9 (struct string_list*,char*) ;
 int FUNC_10 (char*,char**,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_11(struct repository *VAR_4, struct string_list *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 FILE *VAR_7 = FUNC_3(FUNC_5(VAR_4), "r");

 if (!VAR_7)
  return;
 while (!FUNC_7(&VAR_6, VAR_7, '\0')) {
  char *VAR_8;
  unsigned char VAR_9[VAR_0];
  struct rerere_id *VAR_10;
  int VAR_11;
  const unsigned VAR_12 = VAR_3->hexsz;


  if (VAR_6.len < VAR_12 + 2 || FUNC_4(VAR_6.buf, VAR_9))
   FUNC_1(FUNC_0("corrupt MERGE_RR"));

  if (VAR_6.buf[VAR_12] != '.') {
   VAR_11 = 0;
   VAR_8 = VAR_6.buf + VAR_12;
  } else {
   VAR_2 = 0;
   VAR_11 = FUNC_10(VAR_6.buf + VAR_12 + 1, &VAR_8, 10);
   if (VAR_2)
    FUNC_1(FUNC_0("corrupt MERGE_RR"));
  }
  if (*(VAR_8++) != '\t')
   FUNC_1(FUNC_0("corrupt MERGE_RR"));
  VAR_6.buf[VAR_12] = '\0';
  VAR_10 = FUNC_6(VAR_6.buf);
  VAR_10->variant = VAR_11;
  FUNC_9(VAR_5, VAR_8)->util = VAR_10;
 }
 FUNC_8(&VAR_6);
 FUNC_2(VAR_7);
}
