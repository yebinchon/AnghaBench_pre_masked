
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_rename_dst {TYPE_1__* two; } ;
struct diff_filespec {int path; } ;
struct TYPE_2__ {int path; } ;


 struct diff_rename_dst* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct diff_filespec *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = 0;
 VAR_4 = VAR_1;
 while (VAR_4 > VAR_3) {
  int VAR_5 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
  struct diff_rename_dst *VAR_6 = &(VAR_0[VAR_5]);
  int VAR_7 = FUNC_0(VAR_2->path, VAR_6->two->path);
  if (!VAR_7)
   return VAR_5;
  if (VAR_7 < 0) {
   VAR_4 = VAR_5;
   continue;
  }
  VAR_3 = VAR_5+1;
 }
 return -VAR_3 - 1;
}
