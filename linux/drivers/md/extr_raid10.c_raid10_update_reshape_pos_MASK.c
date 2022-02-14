
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {scalar_t__ reshape_progress; } ;
struct mddev {scalar_t__ reshape_position; struct r10conf* private; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int (* resync_info_get ) (struct mddev*,scalar_t__*,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct mddev*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_2)
{
 struct r10conf *VAR_3 = VAR_2->private;
 sector_t VAR_4, VAR_5;

 VAR_1->resync_info_get(VAR_2, &VAR_4, &VAR_5);
 if (((VAR_2->reshape_position <= VAR_5) && (VAR_2->reshape_position >= VAR_4))
     || VAR_2->reshape_position == VAR_0)
  VAR_3->reshape_progress = VAR_2->reshape_position;
 else
  FUNC_0(1);
}
