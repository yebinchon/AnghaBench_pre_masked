
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dw_mipi_dsi {unsigned int lanes; TYPE_2__* slave; TYPE_1__* master; } ;
struct TYPE_4__ {unsigned int lanes; } ;
struct TYPE_3__ {unsigned int lanes; } ;



__attribute__((used)) static unsigned int FUNC_0(struct dw_mipi_dsi *VAR_0)
{

 if (VAR_0->master)
  return VAR_0->master->lanes + VAR_0->lanes;


 if (VAR_0->slave)
  return VAR_0->lanes + VAR_0->slave->lanes;


 return VAR_0->lanes;
}
