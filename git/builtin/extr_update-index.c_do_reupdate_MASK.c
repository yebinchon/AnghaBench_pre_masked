
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct cache_entry {scalar_t__ ce_mode; int name; int oid; } ;


 int VAR_0 ;
 struct cache_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int *,struct cache_entry const*,struct pathspec*,int *) ;
 scalar_t__ FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct pathspec*) ;
 int FUNC_4 (struct cache_entry*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (struct pathspec*,int ,int ,char const*,char const**) ;
 struct cache_entry* FUNC_8 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_9 (char*,int *) ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(int VAR_5, const char **VAR_6,
         const char *VAR_7)
{



 int VAR_8;
 int VAR_9 = 1;
 struct pathspec VAR_10;

 FUNC_7(&VAR_10, 0,
         VAR_0,
         VAR_7, VAR_6 + 1);

 if (FUNC_9("HEAD", &VAR_3))



  VAR_9 = 0;
 redo:
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  const struct cache_entry *VAR_11 = VAR_1[VAR_8];
  struct cache_entry *VAR_12 = ((void*)0);
  int VAR_13;
  char *VAR_14;

  if (FUNC_2(VAR_11) || !FUNC_1(&VAR_4, VAR_11, &VAR_10, ((void*)0)))
   continue;
  if (VAR_9)
   VAR_12 = FUNC_8(((void*)0), &VAR_3,
        VAR_11->name, FUNC_0(VAR_11), 0);
  if (VAR_12 && VAR_11->ce_mode == VAR_12->ce_mode &&
      FUNC_6(&VAR_11->oid, &VAR_12->oid)) {
   FUNC_4(VAR_12);
   continue;
  }




  VAR_13 = VAR_2;
  VAR_14 = FUNC_11(VAR_11->name);
  FUNC_10(VAR_14);
  FUNC_5(VAR_14);
  FUNC_4(VAR_12);
  if (VAR_13 != VAR_2)
   goto redo;
 }
 FUNC_3(&VAR_10);
 return 0;
}
