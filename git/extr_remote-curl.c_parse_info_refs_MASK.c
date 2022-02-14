
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ref {struct ref* next; int old_oid; } ;
struct discovery {char* buf; int len; } ;
struct TYPE_4__ {int hexsz; } ;
struct TYPE_3__ {int buf; } ;


 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ref*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,struct ref*) ;
 int FUNC_6 (struct ref*,struct ref*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct ref *FUNC_8(struct discovery *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 char *VAR_6;
 int VAR_7 = 0;

 struct ref *VAR_8 = ((void*)0);
 struct ref *VAR_9 = ((void*)0);
 struct ref *VAR_10 = ((void*)0);

 VAR_3 = VAR_2->buf;
 VAR_4 = ((void*)0);
 VAR_5 = VAR_3;
 while (VAR_7 < VAR_2->len) {
  if (!VAR_4) {
   VAR_4 = &VAR_3[VAR_7];
  }
  if (VAR_3[VAR_7] == '\t')
   VAR_5 = &VAR_3[VAR_7];
  if (VAR_3[VAR_7] == '\n') {
   if (VAR_5 - VAR_4 != VAR_0->hexsz)
    FUNC_2(FUNC_0("%sinfo/refs not valid: is this a git repository?"),
        FUNC_7(VAR_1.buf));
   VAR_3[VAR_7] = 0;
   VAR_6 = VAR_5 + 1;
   VAR_9 = FUNC_1(VAR_6);
   FUNC_4(VAR_4, &VAR_9->old_oid);
   if (!VAR_8)
    VAR_8 = VAR_9;
   if (VAR_10)
    VAR_10->next = VAR_9;
   VAR_10 = VAR_9;
   VAR_4 = ((void*)0);
  }
  VAR_7++;
 }

 VAR_9 = FUNC_1("HEAD");
 if (!FUNC_5(VAR_1.buf, VAR_9) &&
     !FUNC_6(VAR_9, VAR_8)) {
  VAR_9->next = VAR_8;
  VAR_8 = VAR_9;
 } else {
  FUNC_3(VAR_9);
 }

 return VAR_8;
}
