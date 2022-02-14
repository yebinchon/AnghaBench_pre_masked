
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(int VAR_5)
{
 int VAR_6, VAR_7 = 0;


 if (VAR_5 == 0) {
  FUNC_2(VAR_1, ((void*)0), VAR_4, 0x05);

  FUNC_1(10);
 }


 VAR_6 = FUNC_2(VAR_0, ((void*)0), VAR_2, 0);
 if (VAR_5 == ((VAR_6 & 0x01) == 0))
  goto skip;

 FUNC_2(VAR_1, ((void*)0), VAR_2,
     VAR_5 ? 0x04 : 0x05);
 FUNC_3(200);
 do {
  if (++VAR_7 > 100)
   break;
  FUNC_1(1);
  VAR_6 = FUNC_2(VAR_0, ((void*)0), VAR_3, 0);
 } while((VAR_6 & 0x02) == 0);
 skip:

 if (VAR_5 == 1) {
  FUNC_2(VAR_1, ((void*)0), VAR_4, 0x04);

  FUNC_1(10);
 }





 return 0;
}
