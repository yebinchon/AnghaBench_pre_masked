
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (char*,unsigned char,char*) ;
 int VAR_4 ;
 unsigned char FUNC_1 () ;
 unsigned char FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long VAR_5;
 unsigned char VAR_6, VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_3(&VAR_4, VAR_5);

 while ((VAR_7 = FUNC_2()) & VAR_3) {
  if (VAR_8++ < VAR_1) {
   FUNC_5(50);
   VAR_6 = FUNC_1();
   FUNC_0("%02x <- i8042 (flush, %s)\n",
       VAR_6, VAR_7 & VAR_2 ? "aux" : "kbd");
  } else {
   VAR_9 = -VAR_0;
   break;
  }
 }

 FUNC_4(&VAR_4, VAR_5);

 return VAR_9;
}
