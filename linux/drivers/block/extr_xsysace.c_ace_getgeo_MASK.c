
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct hd_geometry {void* cylinders; void* sectors; void* heads; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct ace_device {void** cf_id; int dev; } ;
struct TYPE_2__ {struct ace_device* private_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_3, struct hd_geometry *VAR_4)
{
 struct ace_device *VAR_5 = VAR_3->bd_disk->private_data;
 u16 *VAR_6 = VAR_5->cf_id;

 FUNC_0(VAR_5->dev, "ace_getgeo()\n");

 VAR_4->heads = VAR_6[VAR_1];
 VAR_4->sectors = VAR_6[VAR_2];
 VAR_4->cylinders = VAR_6[VAR_0];

 return 0;
}
