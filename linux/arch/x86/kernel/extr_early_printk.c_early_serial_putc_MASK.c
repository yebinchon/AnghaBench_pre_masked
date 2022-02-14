
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_3(unsigned char VAR_4)
{
 unsigned VAR_5 = 0xffff;

 while ((FUNC_1(VAR_3, VAR_0) & VAR_2) == 0 && --VAR_5)
  FUNC_0();
 FUNC_2(VAR_3, VAR_1, VAR_4);
 return VAR_5 ? 0 : -1;
}
