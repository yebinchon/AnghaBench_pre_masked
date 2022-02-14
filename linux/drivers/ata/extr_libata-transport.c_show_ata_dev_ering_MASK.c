
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_show_ering_arg {char* member_0; int written; int member_1; } ;
struct ata_device {int ering; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ,struct ata_show_ering_arg*) ;
 int VAR_0 ;
 struct ata_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct ata_device *VAR_4 = FUNC_1(VAR_1);
 struct ata_show_ering_arg VAR_5 = { VAR_3, 0 };

 FUNC_0(&VAR_4->ering, VAR_0, &VAR_5);
 return VAR_5.written;
}
