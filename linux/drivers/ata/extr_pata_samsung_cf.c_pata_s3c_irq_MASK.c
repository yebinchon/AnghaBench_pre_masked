
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c_ide_info {scalar_t__ ide_addr; } ;
struct ata_host {struct s3c_ide_info* private_data; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ata_host *VAR_3 = VAR_2;
 struct s3c_ide_info *VAR_4 = VAR_3->private_data;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->ide_addr + VAR_0);
 FUNC_2(VAR_5, VAR_4->ide_addr + VAR_0);

 return FUNC_0(VAR_1, VAR_2);
}
