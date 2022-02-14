
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibft_kobject {TYPE_2__* header; } ;
typedef int ssize_t ;
struct TYPE_3__ {int oem_table_id; int oem_id; int signature; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_3, int VAR_4, char *VAR_5)
{
 struct ibft_kobject *VAR_6 = VAR_3;
 char *VAR_7 = VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_7 += FUNC_0(VAR_7, VAR_0,
          VAR_6->header->header.signature);
  break;
 case 130:
  VAR_7 += FUNC_0(VAR_7, VAR_1,
          VAR_6->header->header.oem_id);
  break;
 case 129:
  VAR_7 += FUNC_0(VAR_7, VAR_2,
          VAR_6->header->header.oem_table_id);
  break;
 default:
  break;
 }

 return VAR_7 - VAR_5;
}
