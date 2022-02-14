
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(bool VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2)
  VAR_3 |= (uint64_t)VAR_0;
 else
  VAR_3 &= ~(uint64_t)VAR_0;
 FUNC_1(VAR_1, VAR_3);
}
