
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {TYPE_1__* rdev; } ;
struct mddev {int sb_flags; } ;
typedef int sector_t ;
struct TYPE_2__ {int journal_tail; struct mddev* mddev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct r5l_log *VAR_1, sector_t VAR_2)
{
 struct mddev *VAR_3 = VAR_1->rdev->mddev;

 VAR_1->rdev->journal_tail = VAR_2;
 FUNC_0(VAR_0, &VAR_3->sb_flags);
}
