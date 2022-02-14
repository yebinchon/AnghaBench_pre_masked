
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct lkkbd {struct serio* serio; } ;


 int FUNC_0 (struct lkkbd*,unsigned char,unsigned char,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct serio*,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct lkkbd *VAR_10)
{
 struct serio *VAR_11 = VAR_10->serio;
 unsigned char VAR_12 = 0;
 unsigned char VAR_13 = 0;

 FUNC_0(VAR_10, VAR_12, VAR_13, VAR_0, VAR_8);
 FUNC_0(VAR_10, VAR_12, VAR_13, VAR_1, VAR_6);
 FUNC_0(VAR_10, VAR_12, VAR_13, VAR_2, VAR_7);
 FUNC_0(VAR_10, VAR_12, VAR_13, VAR_3, VAR_9);
 if (VAR_12 != 0) {
  FUNC_1(VAR_11, VAR_5);
  FUNC_1(VAR_11, VAR_12);
 }
 if (VAR_13 != 0) {
  FUNC_1(VAR_11, VAR_4);
  FUNC_1(VAR_11, VAR_13);
 }
}
