
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_channel_data {unsigned int min_signal; unsigned int muxval; } ;
struct TYPE_2__ {unsigned int val; scalar_t__ busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int,int ) ;

int FUNC_4(const struct pl08x_channel_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->min_signal, VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_2, VAR_7);


 if (VAR_3[VAR_5].busy &&
   (VAR_3[VAR_5].val != VAR_4->muxval)) {
  FUNC_2(&VAR_2, VAR_7);
  return -VAR_1;
 }


 if (!VAR_3[VAR_5].busy) {
  VAR_6 = FUNC_0(VAR_0);






  VAR_6 &= ~(0x3 << (VAR_5 * 2));
  VAR_6 |= VAR_4->muxval << (VAR_5 * 2);
  FUNC_3(VAR_6, VAR_0);
 }

 VAR_3[VAR_5].busy++;
 VAR_3[VAR_5].val = VAR_4->muxval;
 FUNC_2(&VAR_2, VAR_7);

 return VAR_5;
}
