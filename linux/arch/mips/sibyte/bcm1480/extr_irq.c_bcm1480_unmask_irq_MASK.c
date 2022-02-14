
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(int VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 u64 VAR_9;

 FUNC_4(&VAR_4, VAR_7);
 VAR_8 = 0;
 if ((VAR_6 >= VAR_2) && (VAR_6 <= VAR_1)) {
  VAR_8 = VAR_0;
  VAR_6 -= VAR_2;
 }
 VAR_9 = FUNC_2(FUNC_1(FUNC_0(VAR_5) + VAR_3 + VAR_8));
 VAR_9 &= ~(((u64) 1) << VAR_6);
 FUNC_3(VAR_9, FUNC_1(FUNC_0(VAR_5) + VAR_3 + VAR_8));
 FUNC_5(&VAR_4, VAR_7);
}
