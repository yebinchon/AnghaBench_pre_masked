
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct diff_filespec {int oid; int path; scalar_t__ is_stdin; int oid_valid; } ;


 scalar_t__ FUNC_0 (struct diff_filespec*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct index_state*,int *,int ,struct stat*,int ) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct diff_filespec *VAR_0, struct index_state *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  if (!VAR_0->oid_valid) {
   struct stat VAR_2;
   if (VAR_0->is_stdin) {
    FUNC_5(&VAR_0->oid);
    return;
   }
   if (FUNC_4(VAR_0->path, &VAR_2) < 0)
    FUNC_2("stat '%s'", VAR_0->path);
   if (FUNC_3(VAR_1, &VAR_0->oid, VAR_0->path, &VAR_2, 0))
    FUNC_1("cannot hash %s", VAR_0->path);
  }
 }
 else
  FUNC_5(&VAR_0->oid);
}
