
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xpparam_t ;
struct TYPE_8__ {int* rchg; } ;
struct TYPE_7__ {int* rchg; } ;
struct TYPE_9__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_3__ xdfenv_t ;
struct region {int begin1; int begin2; int end1; int end2; } ;
typedef int lcs ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*,TYPE_3__*,int,int,int,int) ;
 int FUNC_2 (int const*,TYPE_3__*,struct region*,int,int,int,int) ;
 int FUNC_3 (struct region*,int ,int) ;

__attribute__((used)) static int FUNC_4(xpparam_t const *VAR_1, xdfenv_t *VAR_2,
 int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct region VAR_7;
 int VAR_8;
 int VAR_9;
redo:
 VAR_9 = -1;

 if (VAR_4 <= 0 && VAR_6 <= 0)
  return 0;

 if (FUNC_0(1) >= VAR_0)
  return -1;

 if (!VAR_4) {
  while(VAR_6--)
   VAR_2->xdf2.rchg[VAR_5++ - 1] = 1;
  return 0;
 } else if (!VAR_6) {
  while(VAR_4--)
   VAR_2->xdf1.rchg[VAR_3++ - 1] = 1;
  return 0;
 }

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_2(VAR_1, VAR_2, &VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto out;
 else if (VAR_8)
  VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else {
  if (VAR_7.begin1 == 0 && VAR_7.begin2 == 0) {
   while (VAR_4--)
    VAR_2->xdf1.rchg[VAR_3++ - 1] = 1;
   while (VAR_6--)
    VAR_2->xdf2.rchg[VAR_5++ - 1] = 1;
   VAR_9 = 0;
  } else {
   VAR_9 = FUNC_4(VAR_1, VAR_2,
      VAR_3, VAR_7.begin1 - VAR_3,
      VAR_5, VAR_7.begin2 - VAR_5);
   if (VAR_9)
    goto out;






   VAR_4 = FUNC_0(1) - VAR_7.end1;
   VAR_3 = VAR_7.end1 + 1;
   VAR_6 = FUNC_0(2) - VAR_7.end2;
   VAR_5 = VAR_7.end2 + 1;
   goto redo;
  }
 }
out:
 return VAR_9;
}
