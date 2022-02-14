
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {int flags; int nsect; int device; int feature; int protocol; int command; } ;
struct ata_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_device *VAR_8,
     u16 VAR_9, u16 VAR_10)
{
 struct ata_taskfile VAR_11;
 unsigned int VAR_12;


 if (VAR_10 < 1 || VAR_10 > 255 || VAR_9 < 1 || VAR_9 > 16)
  return VAR_1;


 FUNC_0("init dev params \n");

 FUNC_2(VAR_8, &VAR_11);
 VAR_11.command = VAR_3;
 VAR_11.flags |= VAR_6 | VAR_5;
 VAR_11.protocol = VAR_4;
 VAR_11.nsect = VAR_10;
 VAR_11.device |= (VAR_9 - 1) & 0x0f;

 VAR_12 = FUNC_1(VAR_8, &VAR_11, ((void*)0), VAR_7, ((void*)0), 0, 0);



 if (VAR_12 == VAR_0 && (VAR_11.feature & VAR_2))
  VAR_12 = 0;

 FUNC_0("EXIT, err_mask=%x\n", VAR_12);
 return VAR_12;
}
