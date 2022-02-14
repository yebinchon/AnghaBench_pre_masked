
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_req_msg {int offset40; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct cm_req_msg *VAR_0,
        u8 VAR_1)
{
 VAR_0->offset40 = FUNC_1((VAR_1 << 3) |
      (FUNC_0(VAR_0->offset40) &
       0xFFFFFF07));
}
