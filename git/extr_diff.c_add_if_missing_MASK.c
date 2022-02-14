
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct oid_array {int dummy; } ;
struct diff_filespec {int oid; int mode; scalar_t__ oid_valid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct oid_array*,int *) ;
 scalar_t__ FUNC_2 (struct repository*,int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct repository *VAR_1,
      struct oid_array *VAR_2,
      const struct diff_filespec *VAR_3)
{
 if (VAR_3 && VAR_3->oid_valid &&
     !FUNC_0(VAR_3->mode) &&
     FUNC_2(VAR_1, &VAR_3->oid, ((void*)0),
         VAR_0))
  FUNC_1(VAR_2, &VAR_3->oid);
}
