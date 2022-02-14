
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {char const* branch1; TYPE_2__* repo; TYPE_1__* priv; } ;
struct diff_filespec {int dummy; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {scalar_t__ call_depth; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct merge_options*,int,int ,char const*,char const*,char const*,char const*,char const*,char const*,char const*,...) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (struct merge_options*,char const*,char const*) ;
 int FUNC_6 (struct merge_options*,int ,struct diff_filespec const*,char const*) ;
 scalar_t__ FUNC_7 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_8(struct merge_options *VAR_0,
    const char *VAR_1, const char *VAR_2,
    const struct diff_filespec *VAR_3,
    const struct diff_filespec *VAR_4,
    const char *VAR_5,
    const char *VAR_6,
    const char *VAR_7, const char *VAR_8)
{
 char *VAR_9 = ((void*)0);
 const char *VAR_10 = VAR_1;
 int VAR_11 = 0;

 if (FUNC_1(VAR_0->repo->index, VAR_1, !VAR_0->priv->call_depth, 0) ||
     (!VAR_0->priv->call_depth && FUNC_7(VAR_0, VAR_1))) {
  VAR_10 = VAR_9 = FUNC_5(VAR_0, VAR_1, VAR_5);
 }

 if (VAR_0->priv->call_depth) {





  VAR_11 = FUNC_4(VAR_0->repo->index, VAR_1);
  if (!VAR_11)
   VAR_11 = FUNC_6(VAR_0, 0, VAR_3, VAR_10);
 } else {
  if (!VAR_9) {
   if (!VAR_2) {
    FUNC_3(VAR_0, 1, FUNC_0("CONFLICT (%s/delete): %s deleted in %s "
           "and %s in %s. Version %s of %s left in tree."),
           VAR_7, VAR_1, VAR_6, VAR_8,
           VAR_5, VAR_5, VAR_1);
   } else {
    FUNC_3(VAR_0, 1, FUNC_0("CONFLICT (%s/delete): %s deleted in %s "
           "and %s to %s in %s. Version %s of %s left in tree."),
           VAR_7, VAR_2, VAR_6, VAR_8, VAR_1,
           VAR_5, VAR_5, VAR_1);
   }
  } else {
   if (!VAR_2) {
    FUNC_3(VAR_0, 1, FUNC_0("CONFLICT (%s/delete): %s deleted in %s "
           "and %s in %s. Version %s of %s left in tree at %s."),
           VAR_7, VAR_1, VAR_6, VAR_8,
           VAR_5, VAR_5, VAR_1, VAR_9);
   } else {
    FUNC_3(VAR_0, 1, FUNC_0("CONFLICT (%s/delete): %s deleted in %s "
           "and %s to %s in %s. Version %s of %s left in tree at %s."),
           VAR_7, VAR_2, VAR_6, VAR_8, VAR_1,
           VAR_5, VAR_5, VAR_1, VAR_9);
   }
  }






  if (VAR_5 != VAR_0->branch1 || VAR_9)
   VAR_11 = FUNC_6(VAR_0, 0, VAR_4, VAR_10);
 }
 FUNC_2(VAR_9);

 return VAR_11;
}
