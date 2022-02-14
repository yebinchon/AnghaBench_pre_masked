
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int ioport1; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 u16 VAR_3;
 u8 VAR_4;



 FUNC_3();


 VAR_3 = (VAR_2.ioport1 & 0xFFF0) | 0x01;
 FUNC_2(VAR_2.dev, VAR_0, VAR_3);
 FUNC_0(VAR_2.dev, VAR_1, &VAR_4);
 VAR_4 = (VAR_4 & 0xCF) | 0x10;
 FUNC_1(VAR_2.dev, VAR_1, VAR_4);
}
