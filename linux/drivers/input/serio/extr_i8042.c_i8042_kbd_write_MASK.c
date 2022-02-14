
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 int FUNC_0 (char*,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct serio *VAR_1, unsigned char VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_0, VAR_3);

 if (!(VAR_4 = FUNC_1())) {
  FUNC_0("%02x -> i8042 (kbd-data)\n", VAR_2);
  FUNC_2(VAR_2);
 }

 FUNC_4(&VAR_0, VAR_3);

 return VAR_4;
}
