
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {int size; int data; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct repository*,struct diff_filespec*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_0,
          struct diff_filespec *VAR_1,
          struct diff_filespec *VAR_2)
{
 if (FUNC_0(VAR_1->mode))
  return 0;
 if (FUNC_1(VAR_0, VAR_1, 0))
  return 0;
 if (FUNC_1(VAR_0, VAR_2, 0))
  return 0;
 return !FUNC_2(VAR_1->data, VAR_2->data, VAR_1->size);
}
