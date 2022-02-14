
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct iforce {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (unsigned int) ;
 int FUNC_1 (struct iforce*,int ,unsigned char*) ;

int FUNC_2(struct iforce* VAR_1, u16 VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4[3];

 VAR_4[0] = FUNC_0(VAR_2);
 VAR_4[1] = (VAR_3 > 0) ? ((VAR_3 > 1) ? 0x41 : 0x01) : 0;
 VAR_4[2] = FUNC_0(VAR_3);
 return FUNC_1(VAR_1, VAR_0, VAR_4);
}
