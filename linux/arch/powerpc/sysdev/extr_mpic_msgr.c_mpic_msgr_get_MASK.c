
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic_msgr {scalar_t__ in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mpic_msgr* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct mpic_msgr** VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct mpic_msgr *FUNC_3(unsigned int VAR_7)
{
 unsigned long VAR_8;
 struct mpic_msgr *VAR_9;


 VAR_9 = FUNC_0(-VAR_0);

 if (VAR_7 >= VAR_4)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_6, VAR_8);
 VAR_9 = VAR_5[VAR_7];
 if (VAR_9->in_use == VAR_2)
  VAR_9->in_use = VAR_3;
 FUNC_2(&VAR_6, VAR_8);

 return VAR_9;
}
