
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {int dummy; } ;
struct ata_device {int dummy; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int,int ) ;

unsigned int FUNC_1(struct ata_device *VAR_2,
     struct ata_taskfile *VAR_3, u16 *VAR_4)
{
 return FUNC_0(VAR_2, VAR_3, ((void*)0), VAR_1,
         VAR_4, sizeof(VAR_4[0]) * VAR_0, 0);
}
