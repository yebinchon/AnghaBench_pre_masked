
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int**** cache_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_1(u64 VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11 = -VAR_1;
  int VAR_12;

 VAR_11 = FUNC_0(VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (!VAR_6->cache_events || VAR_11)
  return VAR_11;

 if (VAR_8 >= VAR_2 ||
     VAR_9 >= VAR_3 ||
     VAR_10 >= VAR_4)
  return -VAR_0;

 VAR_12 = (*VAR_6->cache_events)[VAR_8][VAR_9][VAR_10];
 if (VAR_12 == VAR_5)
  return -VAR_0;

 return VAR_12;
}
