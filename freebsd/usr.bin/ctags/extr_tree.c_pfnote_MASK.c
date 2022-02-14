
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int nbuf ;
struct TYPE_7__ {char* file; int lno; void* pat; scalar_t__ right; scalar_t__ left; void* entry; } ;
typedef TYPE_1__ NODE ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 char* VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 char const* VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;

void
FUNC_11(const char *VAR_6, int VAR_7)
{
 NODE *VAR_8;
 char *VAR_9;
 char VAR_10[VAR_1];


 if (!(VAR_8 = (NODE *)FUNC_4(sizeof(NODE)))) {
  FUNC_10("too many entries to sort");
  FUNC_5(VAR_3);
  FUNC_3(VAR_3);

  if (!(VAR_3 = VAR_8 = (NODE *)FUNC_4(sizeof(NODE))))
   FUNC_2(1, "out of space");
 }
 if (!VAR_5 && !FUNC_7(VAR_6, "main")) {
  if (!(VAR_9 = FUNC_9(VAR_2, '/')))
   VAR_9 = VAR_2;
  else
   ++VAR_9;
  (void)FUNC_6(VAR_10, sizeof(VAR_10), "M%s", VAR_9);
  VAR_9 = FUNC_9(VAR_10, '.');
  if (VAR_9 && !VAR_9[2])
   *VAR_9 = VAR_0;
  VAR_6 = VAR_10;
 }
 if (!(VAR_8->entry = FUNC_8(VAR_6)))
  FUNC_1(1, ((void*)0));
 VAR_8->file = VAR_2;
 VAR_8->lno = VAR_7;
 VAR_8->left = VAR_8->right = 0;
 if (!(VAR_8->pat = FUNC_8(VAR_4)))
  FUNC_1(1, ((void*)0));
 if (!VAR_3)
  VAR_3 = VAR_8;
 else
  FUNC_0(VAR_8, VAR_3);
}
