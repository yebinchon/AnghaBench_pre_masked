
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ first; } ;
struct mv_cesa_req {TYPE_1__ chain; } ;
typedef enum mv_cesa_req_type { ____Placeholder_mv_cesa_req_type } mv_cesa_req_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum mv_cesa_req_type
FUNC_0(struct mv_cesa_req *VAR_2)
{
 return VAR_2->chain.first ? VAR_0 : VAR_1;
}
