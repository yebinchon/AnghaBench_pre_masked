
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(u8 VAR_3, u8 VAR_4, int VAR_5)
{
 if (VAR_2) {
  unsigned long VAR_6;
  u8 VAR_7, VAR_8;

  FUNC_3(&VAR_1, VAR_6);

  VAR_7 = (VAR_5 ?
     (u8) FUNC_0(VAR_2) :
     FUNC_1(VAR_2));
  VAR_8 = VAR_7 | VAR_3;
  VAR_8 &= ~VAR_4;
  if (!VAR_5)
   VAR_8 &= ~VAR_0;
  if (VAR_5)
   FUNC_5((u32) VAR_8, VAR_2);
  else
   FUNC_2(VAR_8, VAR_2);

  FUNC_4(&VAR_1, VAR_6);
 }
}
