
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct gmap*) ;

__attribute__((used)) static void FUNC_2(struct gmap *VAR_3, unsigned long VAR_4,
    unsigned long *VAR_5)
{
 int VAR_6;

 FUNC_0(!FUNC_1(VAR_3));
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_4 += VAR_2)
  VAR_5[VAR_6] = VAR_1;
}
