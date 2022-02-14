
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct mga_device *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + VAR_0;
 unsigned int VAR_5 = 0;
 do {
  VAR_5 = FUNC_0(VAR_1 + 2);
 } while ((VAR_5 & 0x01) && FUNC_1(VAR_2, VAR_4));
}
