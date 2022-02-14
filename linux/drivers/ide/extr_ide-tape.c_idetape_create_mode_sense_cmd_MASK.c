
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_atapi_pc {int* c; int req_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ide_atapi_pc*) ;

__attribute__((used)) static void FUNC_1(struct ide_atapi_pc *VAR_3, u8 VAR_4)
{
 FUNC_0(VAR_3);
 VAR_3->c[0] = VAR_2;
 if (VAR_4 != VAR_0)

  VAR_3->c[1] = 8;
 VAR_3->c[2] = VAR_4;







 VAR_3->c[3] = 0;

 VAR_3->c[4] = 255;
 if (VAR_4 == VAR_0)
  VAR_3->req_xfer = 12;
 else if (VAR_4 == VAR_1)
  VAR_3->req_xfer = 24;
 else
  VAR_3->req_xfer = 50;
}
