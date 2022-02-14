
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int udp_encap; } ;
struct ocrdma_dev {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct ocrdma_dev *VAR_2)
{
 return (VAR_2->attr.udp_encap & VAR_0) ||
        (VAR_2->attr.udp_encap & VAR_1);
}
