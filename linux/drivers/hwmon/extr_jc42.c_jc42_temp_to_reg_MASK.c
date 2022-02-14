
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (long,int ,int ) ;

__attribute__((used)) static u16 FUNC_1(long VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3,
         VAR_4 ? VAR_2 :
         VAR_1, VAR_0);


 return (VAR_5 * 2 / 125) & 0x1fff;
}
