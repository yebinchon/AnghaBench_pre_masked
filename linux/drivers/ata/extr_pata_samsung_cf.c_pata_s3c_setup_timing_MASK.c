
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ulong ;
struct s3c_ide_info {int dummy; } ;
struct ata_timing {int setup; int act8b; int rec8b; } ;



__attribute__((used)) static unsigned long
FUNC_0(struct s3c_ide_info *VAR_0, const struct ata_timing *VAR_1)
{
 int VAR_2 = VAR_1->setup;
 int VAR_3 = VAR_1->act8b;
 int VAR_4 = VAR_1->rec8b;
 ulong VAR_5;

 VAR_5 = ((VAR_4 & 0xff) << 12) | ((VAR_3 & 0xff) << 4) | (VAR_2 & 0xf);

 return VAR_5;
}
