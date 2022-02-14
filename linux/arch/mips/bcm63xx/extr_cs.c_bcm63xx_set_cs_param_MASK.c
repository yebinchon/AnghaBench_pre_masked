
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(unsigned int VAR_9, u32 VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;

 if (!FUNC_3(VAR_9))
  return -VAR_0;


 if (VAR_9 == VAR_6 ||
     VAR_9 == VAR_5 ||
     VAR_9 == VAR_7)
  return -VAR_0;

 FUNC_4(&VAR_8, VAR_11);
 VAR_12 = FUNC_1(FUNC_0(VAR_9));
 VAR_12 &= ~(VAR_1);
 VAR_12 &= ~(VAR_3);
 VAR_12 &= ~(VAR_4);
 VAR_12 &= ~(VAR_2);
 VAR_12 |= VAR_10;
 FUNC_2(VAR_12, FUNC_0(VAR_9));
 FUNC_5(&VAR_8, VAR_11);

 return 0;
}
