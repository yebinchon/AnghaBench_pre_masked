
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {unsigned long* last_low_overflow_time; scalar_t__** iops; scalar_t__** bps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct throtl_grp *VAR_4)
{
 unsigned long VAR_5 = VAR_3, VAR_6 = VAR_3;

 if (VAR_4->bps[VAR_1][VAR_0] || VAR_4->iops[VAR_1][VAR_0])
  VAR_5 = VAR_4->last_low_overflow_time[VAR_1];
 if (VAR_4->bps[VAR_2][VAR_0] || VAR_4->iops[VAR_2][VAR_0])
  VAR_6 = VAR_4->last_low_overflow_time[VAR_2];
 return FUNC_0(VAR_5, VAR_6);
}
