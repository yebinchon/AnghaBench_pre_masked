
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct gsw_mt753x {int phy_base; TYPE_1__* host_bus; } ;
struct TYPE_5__ {int (* read ) (TYPE_1__*,int,int ) ;int mdio_lock; int (* write ) (TYPE_1__*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct gsw_mt753x *VAR_9, int VAR_10, int VAR_11, u16 VAR_12)
{
 u16 VAR_13;

 if (VAR_10 < VAR_7)
  VAR_10 = (VAR_9->phy_base + VAR_10) & VAR_8;

 FUNC_0(&VAR_9->host_bus->mdio_lock);

 VAR_9->host_bus->write(VAR_9->host_bus, VAR_10, VAR_0,
        (VAR_2 << VAR_3) |
        ((VAR_11 << VAR_6) & VAR_5));

 VAR_9->host_bus->write(VAR_9->host_bus, VAR_10, VAR_1, VAR_12);

 VAR_9->host_bus->write(VAR_9->host_bus, VAR_10, VAR_0,
        (VAR_4 << VAR_3) |
        ((VAR_11 << VAR_6) & VAR_5));

 VAR_13 = VAR_9->host_bus->read(VAR_9->host_bus, VAR_10, VAR_1);

 FUNC_1(&VAR_9->host_bus->mdio_lock);

 return VAR_13;
}
