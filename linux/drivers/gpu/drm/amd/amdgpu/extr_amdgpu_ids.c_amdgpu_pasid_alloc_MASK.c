
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int) ;

int FUNC_3(unsigned int VAR_4)
{
 int VAR_5 = -VAR_0;

 for (VAR_4 = FUNC_1(VAR_4, 31U); VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_0(&VAR_3,
           1U << (VAR_4 - 1), 1U << VAR_4,
           VAR_2);
  if (VAR_5 != -VAR_1)
   break;
 }

 if (VAR_5 >= 0)
  FUNC_2(VAR_5);

 return VAR_5;
}
