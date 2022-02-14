
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct md5_state {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct md5_state *VAR_0)
{
 int VAR_1 = sizeof(struct md5_state) >> 2;
 u32 *VAR_2 = (u32 *)VAR_0;


 FUNC_0(sizeof(struct md5_state) % 4);
 do { *VAR_2++ = 0; } while (--VAR_1);
}
