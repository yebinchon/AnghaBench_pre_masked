
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int git_diff_find_options ;
struct TYPE_6__ {int flags; scalar_t__ similarity; } ;
typedef TYPE_1__ git_diff_delta ;
struct TYPE_7__ {int deltas; } ;
typedef TYPE_2__ git_diff ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int*,TYPE_2__*,int const*,void**,int,int) ;

__attribute__((used)) static int FUNC_2(
 git_diff *VAR_1,
 const git_diff_find_options *VAR_2,
 size_t VAR_3,
 void **VAR_4)
{
 int VAR_5, VAR_6 = -1;
 git_diff_delta *VAR_7 = FUNC_0(&VAR_1->deltas, VAR_3);

 if ((VAR_7->flags & VAR_0) != 0)
  return 0;

 VAR_5 = FUNC_1(
  &VAR_6, VAR_1, VAR_2, VAR_4, 2 * VAR_3, 2 * VAR_3 + 1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_6 >= 0) {
  VAR_7->similarity = (uint16_t)VAR_6;
  VAR_7->flags |= VAR_0;
 }

 return 0;
}
