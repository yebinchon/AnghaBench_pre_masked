
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct mga_device *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + VAR_0/10;
 unsigned int VAR_5 = 0;

 do {
  VAR_5 = FUNC_0(VAR_1);
 } while ((VAR_5 & 0x08) && FUNC_1(VAR_2, VAR_4));
 VAR_4 = VAR_2 + VAR_0/10;
 VAR_5 = 0;
 do {
  VAR_5 = FUNC_0(VAR_1);
 } while (!(VAR_5 & 0x08) && FUNC_1(VAR_2, VAR_4));
}
