
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rd_size; int country; int version; int product; int vendor; int bus; int uniq; int phys; int name; int rd_data; } ;
struct uhid_create_req {scalar_t__ rd_size; int country; int version; int product; int vendor; int bus; int uniq; int phys; int name; int rd_data; } ;
struct TYPE_4__ {TYPE_1__ create2; struct uhid_create_req create; } ;
struct uhid_event {TYPE_2__ u; } ;
struct uhid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct uhid_device*,struct uhid_event*) ;

__attribute__((used)) static int FUNC_3(struct uhid_device *VAR_3,
      struct uhid_event *VAR_4)
{
 struct uhid_create_req VAR_5;

 VAR_5 = VAR_4->u.create;

 if (VAR_5.rd_size <= 0 || VAR_5.rd_size > VAR_2)
  return -VAR_1;
 if (FUNC_0(&VAR_4->u.create2.rd_data, VAR_5.rd_data, VAR_5.rd_size))
  return -VAR_0;

 FUNC_1(VAR_4->u.create2.name, VAR_5.name, sizeof(VAR_5.name));
 FUNC_1(VAR_4->u.create2.phys, VAR_5.phys, sizeof(VAR_5.phys));
 FUNC_1(VAR_4->u.create2.uniq, VAR_5.uniq, sizeof(VAR_5.uniq));
 VAR_4->u.create2.rd_size = VAR_5.rd_size;
 VAR_4->u.create2.bus = VAR_5.bus;
 VAR_4->u.create2.vendor = VAR_5.vendor;
 VAR_4->u.create2.product = VAR_5.product;
 VAR_4->u.create2.version = VAR_5.version;
 VAR_4->u.create2.country = VAR_5.country;

 return FUNC_2(VAR_3, VAR_4);
}
