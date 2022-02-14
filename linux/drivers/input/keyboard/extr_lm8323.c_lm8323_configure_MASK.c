
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8323_chip {int size_x; int size_y; int debounce_time; int active_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lm8323_chip*,int) ;
 int FUNC_1 (struct lm8323_chip*,int,int ,int,...) ;

__attribute__((used)) static int FUNC_2(struct lm8323_chip *VAR_8)
{
 int VAR_9 = (VAR_8->size_x << 4) | VAR_8->size_y;
 int VAR_10 = (VAR_1 | VAR_0);
 int VAR_11 = VAR_8->debounce_time >> 2;
 int VAR_12 = VAR_8->active_time >> 2;





 if (VAR_11 >= VAR_12)
  VAR_12 = VAR_11 + 3;

 FUNC_1(VAR_8, 2, VAR_4, 0);
 FUNC_1(VAR_8, 2, VAR_5, VAR_10);
 FUNC_1(VAR_8, 2, VAR_3, VAR_9);
 FUNC_0(VAR_8, VAR_8->active_time);
 FUNC_1(VAR_8, 2, VAR_2, VAR_11);
 FUNC_1(VAR_8, 3, VAR_7, 0xff, 0xff);
 FUNC_1(VAR_8, 3, VAR_6, 0, 0);






 return 0;
}
