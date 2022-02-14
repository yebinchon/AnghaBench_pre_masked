
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_device {int horkage; int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,unsigned char*) ;
 struct ata_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct ata_device *VAR_5 = FUNC_3(VAR_2);
 unsigned char *VAR_6;

 if (!FUNC_1(VAR_5->id))
  VAR_6 = "unsupported";
 else if (VAR_5->horkage & VAR_0)
  VAR_6 = "forced_unsupported";
 else if (VAR_5->horkage & VAR_1)
   VAR_6 = "forced_unqueued";
 else if (FUNC_0(VAR_5))
  VAR_6 = "queued";
 else
  VAR_6 = "unqueued";

 return FUNC_2(VAR_4, 20, "%s\n", VAR_6);
}
