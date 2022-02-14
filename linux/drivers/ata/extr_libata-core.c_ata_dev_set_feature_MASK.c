
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ata_taskfile {int flags; scalar_t__ nsect; int protocol; scalar_t__ feature; int command; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,unsigned long) ;
 int VAR_7 ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

unsigned int FUNC_3(struct ata_device *VAR_8, u8 VAR_9, u8 VAR_10)
{
 struct ata_taskfile VAR_11;
 unsigned int VAR_12;
 unsigned long VAR_13 = 0;


 FUNC_0("set features - SATA features\n");

 FUNC_2(VAR_8, &VAR_11);
 VAR_11.command = VAR_0;
 VAR_11.feature = VAR_9;
 VAR_11.flags |= VAR_3 | VAR_2;
 VAR_11.protocol = VAR_1;
 VAR_11.nsect = VAR_10;

 if (VAR_9 == VAR_5)
  VAR_13 = VAR_7 ?
     VAR_7 * 1000 : VAR_6;
 VAR_12 = FUNC_1(VAR_8, &VAR_11, ((void*)0), VAR_4, ((void*)0), 0, VAR_13);

 FUNC_0("EXIT, err_mask=%x\n", VAR_12);
 return VAR_12;
}
