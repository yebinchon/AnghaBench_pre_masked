
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (unsigned int,int ,int,int ) ;
 int FUNC_2 (int ,void*) ;
 int VAR_8 ;

void FUNC_3(void *VAR_9, void *VAR_10)
{
 unsigned int VAR_11;

 FUNC_0(VAR_0);
 VAR_6;

 FUNC_2(VAR_0, VAR_10);

 if (VAR_1 == VAR_3) {
  *(unsigned int *)VAR_9 = (VAR_2 == 0) ? 0xffffffff : 0x00000000;
  VAR_8 |= VAR_7;
 } else if (VAR_1 == VAR_4) {
  *(unsigned int *)VAR_9 = 0xffffffff;
  VAR_8 |= VAR_7;
 } else {
  FUNC_1(VAR_11, VAR_0, 32, 0);
  VAR_8 |= VAR_5;
  *(unsigned int *)VAR_9 = VAR_11;
 }

}
