
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int new_layout; int layout; struct faulty_conf* private; } ;
struct faulty_conf {int* period; int * counters; scalar_t__ nfaults; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct mddev *VAR_6)
{
 int VAR_7 = VAR_6->new_layout & VAR_3;
 int VAR_8 = VAR_6->new_layout >> VAR_4;
 struct faulty_conf *VAR_9 = VAR_6->private;

 if (VAR_6->new_layout < 0)
  return 0;


 if (VAR_7 == VAR_1)
  VAR_9->nfaults = 0;
 else if (VAR_7 == VAR_0) {
  int VAR_10;
  for (VAR_10=0 ; VAR_10 < VAR_5 ; VAR_10++) {
   VAR_9->period[VAR_10] = 0;
   FUNC_0(&VAR_9->counters[VAR_10], 0);
  }
 } else if (VAR_7 < VAR_5) {
  VAR_9->period[VAR_7] = VAR_8;
  if (!VAR_8) VAR_8++;
  FUNC_0(&VAR_9->counters[VAR_7], VAR_8);
 } else
  return -VAR_2;
 VAR_6->new_layout = -1;
 VAR_6->layout = -1;
 return 0;
}
