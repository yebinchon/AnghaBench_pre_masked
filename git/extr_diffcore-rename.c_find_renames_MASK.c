
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct diff_score {size_t dst; int score; size_t src; } ;
struct diff_rename_dst {scalar_t__ pair; } ;
struct TYPE_6__ {TYPE_2__* p; } ;
struct TYPE_5__ {TYPE_1__* one; } ;
struct TYPE_4__ {scalar_t__ rename_used; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t,int) ;
 struct diff_rename_dst* VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct diff_score *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4 * VAR_0; VAR_8++) {
  struct diff_rename_dst *VAR_9;

  if ((VAR_3[VAR_8].dst < 0) ||
      (VAR_3[VAR_8].score < VAR_5))
   break;
  VAR_9 = &VAR_1[VAR_3[VAR_8].dst];
  if (VAR_9->pair)
   continue;
  if (!VAR_6 && VAR_2[VAR_3[VAR_8].src].p->one->rename_used)
   continue;
  FUNC_0(VAR_3[VAR_8].dst, VAR_3[VAR_8].src, VAR_3[VAR_8].score);
  VAR_7++;
 }
 return VAR_7;
}
