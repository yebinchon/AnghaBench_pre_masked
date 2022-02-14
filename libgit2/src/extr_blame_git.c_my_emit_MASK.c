
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tlno; long plno; int parent; int target; int blame; } ;
typedef TYPE_1__ blame_chunk_cb_data ;


 scalar_t__ FUNC_0 (int ,long,long,long,int ,int ) ;

__attribute__((used)) static int FUNC_1(
 long VAR_0, long VAR_1,
 long VAR_2, long VAR_3,
 void *VAR_4)
{
 blame_chunk_cb_data *VAR_5 = (blame_chunk_cb_data *)VAR_4;

 if (FUNC_0(VAR_5->blame, VAR_5->tlno, VAR_5->plno, VAR_2, VAR_5->target, VAR_5->parent) < 0)
  return -1;
 VAR_5->plno = VAR_0 + VAR_1;
 VAR_5->tlno = VAR_2 + VAR_3;

 return 0;
}
