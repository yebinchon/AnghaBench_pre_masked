
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int**** cache_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_0(int VAR_6, int *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_5->cache_events)
  return -VAR_0;


 VAR_8 = VAR_6 & 0xff;
 VAR_9 = (VAR_6 >> 8) & 0xff;
 VAR_10 = (VAR_6 >> 16) & 0xff;

 if (VAR_8 >= VAR_2 ||
     VAR_9 >= VAR_3 ||
     VAR_10 >= VAR_4)
  return -VAR_0;

 VAR_11 = (*VAR_5->cache_events)[VAR_8][VAR_9][VAR_10];
 if (VAR_11 == 0)
  return -VAR_1;
 if (VAR_11 == -1)
  return -VAR_0;
 *VAR_7 = VAR_11;
 return 0;
}
