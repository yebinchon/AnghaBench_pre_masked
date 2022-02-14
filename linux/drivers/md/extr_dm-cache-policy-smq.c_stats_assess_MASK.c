
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int hits; scalar_t__ misses; } ;
typedef enum performance { ____Placeholder_performance } performance ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static enum performance FUNC_1(struct stats *VAR_6)
{
 unsigned VAR_7 = FUNC_0(VAR_6->hits << VAR_1, VAR_6->hits + VAR_6->misses);

 if (VAR_7 < VAR_5)
  return VAR_3;

 else if (VAR_7 < VAR_0)
  return VAR_2;

 else
  return VAR_4;
}
