
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7791_state {int mode; int sd; TYPE_1__* info; int filter; } ;
struct ad7791_platform_data {scalar_t__ unipolar; scalar_t__ burnout_current; int buffered; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ad7791_state *VAR_8,
   struct ad7791_platform_data *VAR_9)
{

 VAR_8->mode = VAR_4;
 VAR_8->filter = VAR_0;

 if (!VAR_9)
  return 0;

 if ((VAR_8->info->flags & VAR_1) && !VAR_9->buffered)
  VAR_8->mode &= ~VAR_4;

 if ((VAR_8->info->flags & VAR_2) &&
  VAR_9->burnout_current)
  VAR_8->mode |= VAR_5;

 if ((VAR_8->info->flags & VAR_3) && VAR_9->unipolar)
  VAR_8->mode |= VAR_6;

 return FUNC_0(&VAR_8->sd, VAR_7, sizeof(VAR_8->mode),
  VAR_8->mode);
}
