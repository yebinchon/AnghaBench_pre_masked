
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct gsw_mt753x {TYPE_1__* host_bus; int smi_addr; } ;
struct TYPE_4__ {int (* read ) (TYPE_1__*,int ,int) ;int mdio_lock; int (* write ) (TYPE_1__*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

u32 FUNC_5(struct gsw_mt753x *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_0(&VAR_4->host_bus->mdio_lock);

 VAR_4->host_bus->write(VAR_4->host_bus, VAR_4->smi_addr, 0x1f,
  (VAR_5 & VAR_2) >> VAR_3);

 VAR_7 = VAR_4->host_bus->read(VAR_4->host_bus, VAR_4->smi_addr,
  (VAR_5 & VAR_0) >> VAR_1);

 VAR_6 = VAR_4->host_bus->read(VAR_4->host_bus, VAR_4->smi_addr, 0x10);

 FUNC_1(&VAR_4->host_bus->mdio_lock);

 return (VAR_6 << 16) | (VAR_7 & 0xffff);
}
