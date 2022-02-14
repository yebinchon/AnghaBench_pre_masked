
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct v2m_data {int flags; TYPE_1__ res; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static phys_addr_t FUNC_0(struct v2m_data *VAR_2, int VAR_3)
{
 if (VAR_2->flags & VAR_0)
  return VAR_2->res.start | ((VAR_3 - 32) << 3);
 else
  return VAR_2->res.start + VAR_1;
}
