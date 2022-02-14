
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4 = (VAR_2 >> 24) & 0xff;

 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_0, VAR_3);
  VAR_4 |= (VAR_3 << 2) & 0xff00;
 }

 return VAR_4;
}
