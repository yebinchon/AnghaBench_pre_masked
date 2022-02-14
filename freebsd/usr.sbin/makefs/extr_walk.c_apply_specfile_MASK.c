
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fsnode ;
struct TYPE_5__ {scalar_t__ type; int name; } ;
typedef TYPE_1__ NODE ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct timeval,char*) ;
 int FUNC_1 (struct timeval) ;
 int FUNC_2 (char const*,TYPE_1__*,int *,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int,char*,char const*) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,char const*,char const*,int *) ;
 TYPE_1__* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*) ;

void
FUNC_12(const char *VAR_4, const char *VAR_5, fsnode *VAR_6, int VAR_7)
{
 struct timeval VAR_8;
 FILE *VAR_9;
 NODE *VAR_10;

 FUNC_3(VAR_4 != ((void*)0));
 FUNC_3(VAR_6 != ((void*)0));

 if (VAR_3 & VAR_0)
  FUNC_9("apply_specfile: %s, %s %p\n", VAR_4, VAR_5, VAR_6);


 if ((VAR_9 = FUNC_7(VAR_4, "r")) == ((void*)0))
  FUNC_4(1, "Can't open `%s'", VAR_4);
 FUNC_1(VAR_8);
 VAR_10 = FUNC_10(VAR_9);
 FUNC_0(VAR_8, "spec");
 if (FUNC_6(VAR_9) == VAR_1)
  FUNC_4(1, "Can't close `%s'", VAR_4);


 if (VAR_10 == ((void*)0))
  FUNC_5(1, "Specfile `%s' did not contain a tree", VAR_4);
 FUNC_3(FUNC_11(VAR_10->name, ".") == 0);
 FUNC_3(VAR_10->type == VAR_2);


 FUNC_2(VAR_5, VAR_10, VAR_6, VAR_7);

 FUNC_8(VAR_10);
}
