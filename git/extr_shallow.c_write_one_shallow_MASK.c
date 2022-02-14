
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct write_shallow_data {int flags; int out; scalar_t__ use_pack_protocol; int count; } ;
struct commit_graft {int nr_parent; int oid; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct commit* FUNC_1 (int ,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,char const*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(const struct commit_graft *VAR_5, void *VAR_6)
{
 struct write_shallow_data *VAR_7 = VAR_6;
 const char *VAR_8 = FUNC_2(&VAR_5->oid);
 if (VAR_5->nr_parent != -1)
  return 0;
 if (VAR_7->flags & VAR_0) {
  if (!FUNC_0(&VAR_5->oid))
   return 0;
 } else if (VAR_7->flags & VAR_2) {
  struct commit *VAR_9 = FUNC_1(VAR_4, &VAR_5->oid);
  if (!VAR_9 || !(VAR_9->object.flags & VAR_1)) {
   if (VAR_7->flags & VAR_3)
    FUNC_4("Removing %s from .git/shallow\n",
           FUNC_2(&VAR_9->object.oid));
   return 0;
  }
 }
 VAR_7->count++;
 if (VAR_7->use_pack_protocol)
  FUNC_3(VAR_7->out, "shallow %s", VAR_8);
 else {
  FUNC_6(VAR_7->out, VAR_8);
  FUNC_5(VAR_7->out, '\n');
 }
 return 0;
}
