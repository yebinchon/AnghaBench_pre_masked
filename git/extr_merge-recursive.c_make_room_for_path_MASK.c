
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct merge_options {TYPE_2__* priv; } ;
struct TYPE_6__ {int nr; TYPE_1__* items; } ;
struct TYPE_5__ {TYPE_3__ df_conflict_file_set; } ;
struct TYPE_4__ {char* string; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct merge_options*,char const*,char const*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct merge_options*,int,char*,char const*) ;
 int FUNC_3 (char const*) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,size_t) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_8 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_9(struct merge_options *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7 = FUNC_0("failed to create path '%s'%s");


 for (VAR_6 = 0; VAR_6 < VAR_3->priv->df_conflict_file_set.nr; VAR_6++) {
  const char *VAR_8 = VAR_3->priv->df_conflict_file_set.items[VAR_6].string;
  size_t VAR_9 = FUNC_4(VAR_4);
  size_t VAR_10 = FUNC_4(VAR_8);
  if (VAR_10 < VAR_9 &&
      VAR_4[VAR_10] == '/' &&
      FUNC_5(VAR_4, VAR_8, VAR_10) == 0) {
   FUNC_2(VAR_3, 3,
          FUNC_0("Removing %s to make room for subdirectory\n"),
          VAR_8);
   FUNC_6(VAR_8);
   FUNC_7(&VAR_3->priv->df_conflict_file_set,
        VAR_6, 0);
   break;
  }
 }


 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  if (VAR_5 == VAR_1)

   return FUNC_1(VAR_3, VAR_7, VAR_4, FUNC_0(": perhaps a D/F conflict?"));
  return FUNC_1(VAR_3, VAR_7, VAR_4, "");
 }





 if (FUNC_8(VAR_3, VAR_4))
  return FUNC_1(VAR_3, FUNC_0("refusing to lose untracked file at '%s'"),
      VAR_4);


 if (!FUNC_6(VAR_4))
  return 0;

 if (VAR_2 == VAR_0)
  return 0;

 return FUNC_1(VAR_3, VAR_7, VAR_4, FUNC_0(": perhaps a D/F conflict?"));
}
