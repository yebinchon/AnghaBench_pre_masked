
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned int VAR_6;
 unsigned int VAR_7;


 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_7 & (1 << (VAR_2 + 1)))
  return;

 VAR_6 = (FUNC_0(VAR_3) &
  VAR_0) >>
  VAR_1;
 if (VAR_6 == 0)
  VAR_6 = 1;


 FUNC_2(VAR_5, 7 << (VAR_2 + 1),
  VAR_6 << (VAR_2 + 2) , VAR_4);
 FUNC_3(1);


 FUNC_2(VAR_5, 0, 1 << (VAR_2 + 1), VAR_4);
 FUNC_3(1);
}
