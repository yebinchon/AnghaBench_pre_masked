
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_dmae_device {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short FUNC_0 (struct sh_dmae_device*) ;
 int FUNC_1 (struct sh_dmae_device*,unsigned short) ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sh_dmae_device *VAR_4)
{
 unsigned short VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3, VAR_6);

 VAR_5 = FUNC_0(VAR_4);
 FUNC_1(VAR_4, VAR_5 & ~(VAR_2 | VAR_0 | VAR_1));

 FUNC_3(&VAR_3, VAR_6);
}
