
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int fixed_speeds_supported; int auto_speeds_supported; } ;
struct ocrdma_dev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

char *FUNC_0(struct ocrdma_dev *VAR_3)
{
 char *VAR_4 = "";
 u16 VAR_5;

 VAR_5 = VAR_3->phy.fixed_speeds_supported |
    VAR_3->phy.auto_speeds_supported;
 if (VAR_5 & VAR_2)
  VAR_4 = "40Gbps ";
 else if (VAR_5 & VAR_0)
  VAR_4 = "10Gbps ";
 else if (VAR_5 & VAR_1)
  VAR_4 = "1Gbps ";

 return VAR_4;
}
