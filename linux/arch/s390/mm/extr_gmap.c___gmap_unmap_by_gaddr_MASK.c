
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int guest_to_host; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct gmap*,unsigned long) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct gmap *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (unsigned long) FUNC_1(&VAR_1->guest_to_host,
         VAR_2 >> VAR_0);
 return VAR_3 ? FUNC_0(VAR_1, VAR_3) : 0;
}
