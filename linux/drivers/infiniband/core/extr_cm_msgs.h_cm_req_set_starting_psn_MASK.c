
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_req_msg {int offset44; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct cm_req_msg *VAR_0,
        __be32 VAR_1)
{
 VAR_0->offset44 = FUNC_1((FUNC_0(VAR_1) << 8) |
       (FUNC_0(VAR_0->offset44) & 0x000000FF));
}
