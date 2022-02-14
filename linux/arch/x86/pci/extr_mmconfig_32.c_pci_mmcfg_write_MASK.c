
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_3, unsigned int VAR_4,
      unsigned int VAR_5, int VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;

 if ((VAR_4 > 255) || (VAR_5 > 255) || (VAR_6 > 4095))
  return -VAR_0;

 FUNC_7();
 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (!VAR_10) {
  FUNC_8();
  return -VAR_0;
 }

 FUNC_5(&VAR_2, VAR_9);

 FUNC_4(VAR_10, VAR_4, VAR_5);

 switch (VAR_7) {
 case 1:
  FUNC_1(VAR_1 + VAR_6, VAR_8);
  break;
 case 2:
  FUNC_3(VAR_1 + VAR_6, VAR_8);
  break;
 case 4:
  FUNC_2(VAR_1 + VAR_6, VAR_8);
  break;
 }
 FUNC_6(&VAR_2, VAR_9);
 FUNC_8();

 return 0;
}
