
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_target {char* error; int table; } ;
struct crypt_config {scalar_t__ on_disk_tag_size; scalar_t__ sector_size; scalar_t__ integrity_tag_size; scalar_t__ integrity_iv_size; TYPE_2__* dev; } ;
struct blk_integrity {scalar_t__ tag_size; scalar_t__ tuple_size; scalar_t__ interval_exp; TYPE_3__* profile; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* bdev; } ;
struct TYPE_4__ {int bd_disk; } ;


 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 (struct crypt_config*) ;
 struct blk_integrity* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct crypt_config*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct mapped_device*) ;
 struct mapped_device* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct crypt_config *VAR_1, struct dm_target *VAR_2)
{
 VAR_2->error = "Integrity profile not supported.";
 return -VAR_0;

}
