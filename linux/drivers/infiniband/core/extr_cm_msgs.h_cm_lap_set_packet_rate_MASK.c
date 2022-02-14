
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_lap_msg {int offset61; } ;



__attribute__((used)) static inline void FUNC_0(struct cm_lap_msg *VAR_0,
       u8 VAR_1)
{
 VAR_0->offset61 = (VAR_1 & 0x3F) | (VAR_0->offset61 & 0xC0);
}
