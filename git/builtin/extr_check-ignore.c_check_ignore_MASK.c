
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct path_pattern {int dummy; } ;
struct dir_struct {int dummy; } ;
struct TYPE_2__ {char* match; int original; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct pathspec*) ;
 char* FUNC_1 (struct pathspec*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 struct path_pattern* FUNC_4 (struct dir_struct*,int *,char const*,int*) ;
 int FUNC_5 (int ,struct path_pattern*) ;
 int FUNC_6 (struct pathspec*,int,int,char const*,char const**) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct dir_struct *VAR_9,
   const char *VAR_10, int VAR_11, const char **VAR_12)
{
 const char *VAR_13;
 char *VAR_14;
 int VAR_15 = 0, VAR_16;
 struct path_pattern *VAR_17;
 struct pathspec VAR_18;

 if (!VAR_11) {
  if (!VAR_5)
   FUNC_2(VAR_7, "no pathspec given.\n");
  return 0;
 }





 FUNC_6(&VAR_18,
         VAR_1 & ~VAR_2,
         VAR_4 |
         VAR_3,
         VAR_10, VAR_12);

 FUNC_0(&VAR_8, &VAR_18);






 VAR_14 = FUNC_1(&VAR_18, &VAR_8);
 for (VAR_16 = 0; VAR_16 < VAR_18.nr; VAR_16++) {
  VAR_13 = VAR_18.items[VAR_16].match;
  VAR_17 = ((void*)0);
  if (!VAR_14[VAR_16]) {
   int VAR_19 = VAR_0;
   VAR_17 = FUNC_4(VAR_9, &VAR_8,
       VAR_13, &VAR_19);
  }
  if (!VAR_5 && (VAR_17 || VAR_6))
   FUNC_5(VAR_18.items[VAR_16].original, VAR_17);
  if (VAR_17)
   VAR_15++;
 }
 FUNC_3(VAR_14);

 return VAR_15;
}
