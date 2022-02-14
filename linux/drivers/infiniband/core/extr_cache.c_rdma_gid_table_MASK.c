
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_gid_table {int dummy; } ;
struct ib_device {TYPE_2__* port_data; } ;
struct TYPE_3__ {struct ib_gid_table* gid; } ;
struct TYPE_4__ {TYPE_1__ cache; } ;



__attribute__((used)) static struct ib_gid_table *FUNC_0(struct ib_device *VAR_0, u8 VAR_1)
{
 return VAR_0->port_data[VAR_1].cache.gid;
}
