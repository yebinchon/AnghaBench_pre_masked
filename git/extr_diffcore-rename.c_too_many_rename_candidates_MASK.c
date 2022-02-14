
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int find_copies_harder; } ;
struct diff_options {int rename_limit; int needed_rename_limit; TYPE_1__ flags; } ;
struct TYPE_4__ {int p; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2,
          struct diff_options *VAR_3)
{
 int VAR_4 = VAR_3->rename_limit;
 int VAR_5 = VAR_1;
 int VAR_6;

 VAR_3->needed_rename_limit = 0;







 if (VAR_4 <= 0)
  VAR_4 = 32767;
 if ((VAR_2 <= VAR_4 || VAR_5 <= VAR_4) &&
     ((uint64_t)VAR_2 * (uint64_t)VAR_5
      <= (uint64_t)VAR_4 * (uint64_t)VAR_4))
  return 0;

 VAR_3->needed_rename_limit =
  VAR_5 > VAR_2 ? VAR_5 : VAR_2;


 if (!VAR_3->flags.find_copies_harder)
  return 1;


 for (VAR_5 = VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_0[VAR_6].p))
   continue;
  VAR_5++;
 }
 if ((VAR_2 <= VAR_4 || VAR_5 <= VAR_4) &&
     ((uint64_t)VAR_2 * (uint64_t)VAR_5
      <= (uint64_t)VAR_4 * (uint64_t)VAR_4))
  return 2;
 return 1;
}
