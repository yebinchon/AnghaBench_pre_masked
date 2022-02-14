
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int removed; int asce; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (struct gmap*,int ,unsigned long*) ;
 int FUNC_2 (struct gmap*,int ,unsigned long*) ;
 int FUNC_3 (struct gmap*,int ,unsigned long*) ;
 int FUNC_4 (struct gmap*,int ,unsigned long*) ;
 int FUNC_5 (struct gmap*,int ,unsigned long) ;
 int FUNC_6 (struct gmap*) ;
 int FUNC_7 (struct gmap*) ;

__attribute__((used)) static void FUNC_8(struct gmap *VAR_2)
{
 unsigned long *VAR_3;

 FUNC_0(!FUNC_7(VAR_2));
 if (VAR_2->removed)
  return;
 VAR_2->removed = 1;
 FUNC_5(VAR_2, 0, -1UL);
 FUNC_6(VAR_2);
 VAR_3 = (unsigned long *)(VAR_2->asce & VAR_0);
 switch (VAR_2->asce & VAR_1) {
 case 131:
  FUNC_1(VAR_2, 0, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_2, 0, VAR_3);
  break;
 case 129:
  FUNC_3(VAR_2, 0, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_2, 0, VAR_3);
  break;
 }
}
