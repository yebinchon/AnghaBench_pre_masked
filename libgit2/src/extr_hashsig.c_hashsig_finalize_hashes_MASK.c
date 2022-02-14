
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {int opt; TYPE_2__ maxs; TYPE_2__ mins; } ;
typedef TYPE_1__ git_hashsig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(git_hashsig *VAR_4)
{
 if (VAR_4->mins.size < VAR_3 &&
  !(VAR_4->opt & VAR_2)) {
  FUNC_0(VAR_1,
   "file too small for similarity signature calculation");
  return VAR_0;
 }

 FUNC_1(&VAR_4->mins);
 FUNC_1(&VAR_4->maxs);

 return 0;
}
