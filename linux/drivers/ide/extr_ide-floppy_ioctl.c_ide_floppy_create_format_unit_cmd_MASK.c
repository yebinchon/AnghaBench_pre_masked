
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_atapi_pc {int* c; int req_xfer; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ide_atapi_pc*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct ide_atapi_pc *VAR_2,
           u8 *VAR_3, int VAR_4, int VAR_5,
           int VAR_6)
{
 FUNC_1(VAR_2);
 VAR_2->c[0] = VAR_0;
 VAR_2->c[1] = 0x17;

 FUNC_2(VAR_3, 0, 12);
 VAR_3[1] = 0xA2;


 if (VAR_6 & 1)
  VAR_3[1] ^= 0x20;
 VAR_3[3] = 8;

 FUNC_3(FUNC_0(VAR_4), (unsigned int *)(&VAR_3[4]));
 FUNC_3(FUNC_0(VAR_5), (unsigned int *)(&VAR_3[8]));
 VAR_2->req_xfer = 12;
 VAR_2->flags |= VAR_1;
}
