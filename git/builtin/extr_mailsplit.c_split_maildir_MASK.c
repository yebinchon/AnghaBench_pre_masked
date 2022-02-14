
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; int cmp; } ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 struct string_list VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct string_list*,char const*) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,int *,char) ;
 int FUNC_7 (struct string_list*,int) ;
 char* FUNC_8 (char*,char const*,int,...) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, const char *VAR_4,
 int VAR_5, int VAR_6)
{
 char *VAR_7 = ((void*)0);
 FILE *VAR_8 = ((void*)0);
 int VAR_9 = -1;
 int VAR_10;
 struct string_list VAR_11 = VAR_0;

 VAR_11.cmp = VAR_2;

 if (FUNC_4(&VAR_11, VAR_3) < 0)
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_11.nr; VAR_10++) {
  char *VAR_12;

  FUNC_3(VAR_7);
  VAR_7 = FUNC_8("%s/%s", VAR_3, VAR_11.items[VAR_10].string);

  VAR_8 = FUNC_2(VAR_7, "r");
  if (!VAR_8) {
   FUNC_0("cannot open mail %s", VAR_7);
   goto out;
  }

  if (FUNC_6(&VAR_1, VAR_8, '\n')) {
   FUNC_0("cannot read mail %s", VAR_7);
   goto out;
  }

  VAR_12 = FUNC_8("%s/%0*d", VAR_4, VAR_5, ++VAR_6);
  FUNC_5(VAR_8, VAR_12, 1);
  FUNC_3(VAR_12);

  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
 }

 VAR_9 = VAR_6;
out:
 if (VAR_8)
  FUNC_1(VAR_8);
 FUNC_3(VAR_7);
 FUNC_7(&VAR_11, 1);
 return VAR_9;
}
