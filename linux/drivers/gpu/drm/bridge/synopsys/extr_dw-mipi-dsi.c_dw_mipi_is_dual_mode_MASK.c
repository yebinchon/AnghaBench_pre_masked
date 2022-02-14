
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi {scalar_t__ master; scalar_t__ slave; } ;



__attribute__((used)) static inline bool FUNC_0(struct dw_mipi_dsi *VAR_0)
{
 return VAR_0->slave || VAR_0->master;
}
