
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_rep_msg {int offset27; } ;



__attribute__((used)) static inline void FUNC_0(struct cm_rep_msg *VAR_0,
           u8 VAR_1)
{
 VAR_0->offset27 = (u8) ((VAR_0->offset27 & 0x1F) |
      (VAR_1 << 5));
}
