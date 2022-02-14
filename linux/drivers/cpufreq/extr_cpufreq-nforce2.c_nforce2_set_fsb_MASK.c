
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int VAR_7 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_8)
{
 u32 VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 if ((VAR_8 > VAR_5) || (VAR_8 < VAR_2)) {
  FUNC_6("FSB %d is out of range!\n", VAR_8);
  return -VAR_0;
 }

 VAR_10 = FUNC_2(0);
 if (!VAR_10) {
  FUNC_6("Error while reading the FSB\n");
  return -VAR_0;
 }


 FUNC_4(VAR_7, VAR_4, (u8 *)&VAR_9);
 if (!VAR_9) {
  VAR_12 = FUNC_1(VAR_10);

  if (VAR_12 < 0)
   return -VAR_0;

  FUNC_3(VAR_12);
 }


 VAR_9 = 0x01;
 FUNC_5(VAR_7, VAR_4, (u8)VAR_9);

 VAR_11 = VAR_10 - VAR_8;

 if (!VAR_11)
  return 0;

 while ((VAR_10 != VAR_8) && (VAR_10 <= VAR_5) && (VAR_10 >= VAR_6)) {
  if (VAR_11 < 0)
   VAR_10++;
  else
   VAR_10--;


  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12 == -1)
   return -VAR_0;

  FUNC_3(VAR_12);



 }

 VAR_9 = 0x40;
 FUNC_5(VAR_7, VAR_3, (u8)VAR_9);

 return 0;
}
