
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {TYPE_1__* repo; } ;
struct diff_filespec {int dummy; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct merge_options*,struct diff_filespec const*,char const*,int,int ,int) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct merge_options *VAR_2, const char *VAR_3,
    const struct diff_filespec *VAR_4,
    const struct diff_filespec *VAR_5,
    const struct diff_filespec *VAR_6)
{
 int VAR_7 = 1;
 int VAR_8 = VAR_0 | VAR_1;
 if (VAR_7)
  if (FUNC_1(VAR_2->repo->index, VAR_3))
   return -1;
 if (VAR_4)
  if (FUNC_0(VAR_2, VAR_4, VAR_3, 1, 0, VAR_8))
   return -1;
 if (VAR_5)
  if (FUNC_0(VAR_2, VAR_5, VAR_3, 2, 0, VAR_8))
   return -1;
 if (VAR_6)
  if (FUNC_0(VAR_2, VAR_6, VAR_3, 3, 0, VAR_8))
   return -1;
 return 0;
}
