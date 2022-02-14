
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int tagged_supported; } ;


 int FUNC_0 (struct scsi_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct scsi_device *VAR_0, int VAR_1)
{
 if (!VAR_0->tagged_supported)
  VAR_1 = 1;
 return FUNC_0(VAR_0, VAR_1);
}
