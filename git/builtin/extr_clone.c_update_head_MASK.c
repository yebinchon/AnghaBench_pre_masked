
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref {int old_oid; int name; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int ,int ) ;
 struct commit* FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,char*,char const**) ;
 int VAR_4 ;
 int FUNC_6 (char const*,char*,int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(const struct ref *VAR_5, const struct ref *VAR_6,
   const char *VAR_7)
{
 const char *VAR_8;
 if (VAR_5 && FUNC_5(VAR_5->name, "refs/heads/", &VAR_8)) {

  if (FUNC_1("HEAD", VAR_5->name, ((void*)0)) < 0)
   FUNC_2(FUNC_0("unable to update HEAD"));
  if (!VAR_2) {
   FUNC_6(VAR_7, "HEAD", &VAR_5->old_oid, ((void*)0), 0,
       VAR_1);
   FUNC_3(0, VAR_8, VAR_3, VAR_5->name);
  }
 } else if (VAR_5) {
  struct commit *VAR_9 = FUNC_4(VAR_4,
          &VAR_5->old_oid);

  FUNC_6(VAR_7, "HEAD", &VAR_9->object.oid, ((void*)0), VAR_0,
      VAR_1);
 } else if (VAR_6) {





  FUNC_6(VAR_7, "HEAD", &VAR_6->old_oid, ((void*)0), VAR_0,
      VAR_1);
 }
}
