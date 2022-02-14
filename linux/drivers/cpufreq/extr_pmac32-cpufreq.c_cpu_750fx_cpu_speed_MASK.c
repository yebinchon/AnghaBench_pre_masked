
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
 u32 VAR_5;

 if (VAR_4 == 0) {

  FUNC_4(VAR_0, ((void*)0), VAR_3, 0x05);

  FUNC_0(10);


  if (VAR_2) {
   VAR_5 = FUNC_2(VAR_1);
   VAR_5 &= ~0x2000;
   FUNC_3(VAR_1, VAR_5);
  }
 }



 if (VAR_4 == 1) {

  if (VAR_2) {
   VAR_5 = FUNC_2(VAR_1);
   VAR_5 |= 0x2000;
   FUNC_3(VAR_1, VAR_5);
  }


  FUNC_4(VAR_0, ((void*)0), VAR_3, 0x04);
  FUNC_0(10);
 }

 return 0;
}
