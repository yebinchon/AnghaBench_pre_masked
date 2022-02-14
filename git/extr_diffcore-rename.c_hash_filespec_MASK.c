
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {int oid; int size; int data; int oid_valid; } ;


 scalar_t__ FUNC_0 (struct repository*,struct diff_filespec*,int ) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct repository *VAR_0,
      struct diff_filespec *VAR_1)
{
 if (!VAR_1->oid_valid) {
  if (FUNC_0(VAR_0, VAR_1, 0))
   return 0;
  FUNC_1(VAR_1->data, VAR_1->size, "blob",
     &VAR_1->oid);
 }
 return FUNC_2(&VAR_1->oid);
}
