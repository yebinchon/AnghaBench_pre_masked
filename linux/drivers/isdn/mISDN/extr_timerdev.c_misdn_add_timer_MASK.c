
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct mISDNtimerdev {int work; scalar_t__ next_id; int lock; int pending; int wait; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct mISDNtimer {int id; TYPE_1__ tl; int list; struct mISDNtimerdev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mISDNtimer* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct mISDNtimerdev *VAR_5, int VAR_6)
{
 int VAR_7;
 struct mISDNtimer *VAR_8;

 if (!VAR_6) {
  VAR_5->work = 1;
  FUNC_6(&VAR_5->wait);
  VAR_7 = 0;
 } else {
  VAR_8 = FUNC_1(sizeof(struct mISDNtimer), VAR_1);
  if (!VAR_8)
   return -VAR_0;
  VAR_8->dev = VAR_5;
  FUNC_5(&VAR_8->tl, VAR_3, 0);
  FUNC_3(&VAR_5->lock);
  VAR_7 = VAR_8->id = VAR_5->next_id++;
  if (VAR_5->next_id < 0)
   VAR_5->next_id = 1;
  FUNC_2(&VAR_8->list, &VAR_5->pending);
  VAR_8->tl.expires = VAR_4 + ((VAR_2 * (u_long)VAR_6) / 1000);
  FUNC_0(&VAR_8->tl);
  FUNC_4(&VAR_5->lock);
 }
 return VAR_7;
}
