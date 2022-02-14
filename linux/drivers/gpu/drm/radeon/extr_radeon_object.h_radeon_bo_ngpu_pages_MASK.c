
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pages; } ;
struct radeon_bo {TYPE_1__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned FUNC_0(struct radeon_bo *VAR_2)
{
 return (VAR_2->tbo.num_pages << VAR_0) / VAR_1;
}
