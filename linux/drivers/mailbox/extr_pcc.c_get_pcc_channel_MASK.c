
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {int dummy; } ;
struct TYPE_2__ {int num_chans; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;
 struct mbox_chan* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct mbox_chan *FUNC_1(int VAR_3)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_2.num_chans)
  return FUNC_0(-VAR_0);

 return &VAR_1[VAR_3];
}
