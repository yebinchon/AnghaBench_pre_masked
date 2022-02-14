
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int size; int nsid; } ;
struct vmw_escape_header {TYPE_1__ body; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct vmw_escape_header *VAR_2,
          uint32_t VAR_3)
{
 VAR_2->cmd = VAR_0;
 VAR_2->body.nsid = VAR_1;
 VAR_2->body.size = VAR_3;
}
