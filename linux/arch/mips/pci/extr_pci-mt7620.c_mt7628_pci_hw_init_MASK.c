
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int,int,int*) ;
 int FUNC_4 (int *,int ,int,int,int) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 u32 VAR_6 = 0;


 FUNC_7(FUNC_0(16), 0, VAR_1);
 FUNC_6(VAR_4);


 FUNC_7(0, VAR_2, VAR_0);
 FUNC_2(100);


 FUNC_5(~0xff, 0x5, VAR_3);

 FUNC_3(((void*)0), 0, 0x70c, 4, &VAR_6);
 VAR_6 &= ~(0xff) << 8;
 VAR_6 |= 0x50 << 8;
 FUNC_4(((void*)0), 0, 0x70c, 4, VAR_6);

 FUNC_3(((void*)0), 0, 0x70c, 4, &VAR_6);
 FUNC_1(&VAR_5->dev, "Port 0 N_FTS = %x\n", (unsigned int) VAR_6);

 return 0;
}
