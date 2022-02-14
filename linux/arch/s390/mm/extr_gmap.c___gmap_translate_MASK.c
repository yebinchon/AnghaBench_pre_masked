
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int guest_to_host; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned long) ;

unsigned long FUNC_1(struct gmap *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = (unsigned long)
  FUNC_0(&VAR_3->guest_to_host, VAR_4 >> VAR_2);

 return VAR_5 ? (VAR_5 | (VAR_4 & ~VAR_1)) : -VAR_0;
}
