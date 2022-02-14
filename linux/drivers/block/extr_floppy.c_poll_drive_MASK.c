
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int flags; scalar_t__ cmd_count; scalar_t__ track; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(bool VAR_8, int VAR_9)
{

 VAR_7 = &VAR_4;
 VAR_7->flags = VAR_9;
 VAR_7->track = 0;
 VAR_7->cmd_count = 0;
 VAR_3 = &VAR_6;
 FUNC_0(VAR_0->flags, "setting NEWCHANGE in poll_drive\n");
 FUNC_1(VAR_2, &VAR_1->flags);

 return FUNC_2(VAR_5, VAR_8);
}
