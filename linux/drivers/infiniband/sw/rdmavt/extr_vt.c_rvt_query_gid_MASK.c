
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_2__ global; } ;
typedef int u8 ;
struct rvt_ibport {int gid_prefix; } ;
struct TYPE_3__ {int (* get_guid_be ) (struct rvt_dev_info*,struct rvt_ibport*,int,int *) ;} ;
struct rvt_dev_info {TYPE_1__ driver_f; struct rvt_ibport** ports; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct rvt_dev_info*,struct rvt_ibport*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, u8 VAR_2,
    int VAR_3, union ib_gid *VAR_4)
{
 struct rvt_dev_info *VAR_5;
 struct rvt_ibport *VAR_6;
 int VAR_7;






 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_5->ports[VAR_7];

 VAR_4->global.subnet_prefix = VAR_6->gid_prefix;

 return VAR_5->driver_f.get_guid_be(VAR_5, VAR_6, VAR_3,
      &VAR_4->global.interface_id);
}
