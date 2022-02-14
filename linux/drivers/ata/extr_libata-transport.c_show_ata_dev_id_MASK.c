
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_device {scalar_t__ class; int* id; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char*,int,char) ;
 struct ata_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct ata_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0, VAR_7 = 0;

 if (VAR_5->class == VAR_0)
  return 0;
 for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
  VAR_6 += FUNC_0(VAR_4+VAR_6, 20, "%04x%c",
        VAR_5->id[VAR_7],
        ((VAR_7+1) & 7) ? ' ' : '\n');
 }
 return VAR_6;
}
