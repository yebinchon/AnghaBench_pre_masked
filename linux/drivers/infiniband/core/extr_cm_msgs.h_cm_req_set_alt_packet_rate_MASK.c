
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_req_msg {int alt_offset132; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct cm_req_msg *VAR_0,
           u8 VAR_1)
{
 VAR_0->alt_offset132 = FUNC_1(
     (FUNC_0(VAR_0->alt_offset132) &
      0xFFFFFFC0) | (VAR_1 & 0x3F));
}
