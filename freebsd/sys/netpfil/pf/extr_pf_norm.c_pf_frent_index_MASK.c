
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct pf_frent {int fe_off; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(struct pf_frent *VAR_1)
{






 FUNC_0(((u_int16_t)0xffff &~ 7) / (0x10000 / VAR_0) ==
     16 - 1);
 FUNC_0(((u_int16_t)0xffff >> 3) / VAR_0 == 512 - 1);

 return VAR_1->fe_off / (0x10000 / VAR_0);
}
