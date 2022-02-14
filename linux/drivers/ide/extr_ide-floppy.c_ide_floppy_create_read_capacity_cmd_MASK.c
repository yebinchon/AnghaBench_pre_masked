
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_atapi_pc {int* c; int req_xfer; } ;


 int VAR_0 ;
 int FUNC_0 (struct ide_atapi_pc*) ;

void FUNC_1(struct ide_atapi_pc *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->c[0] = VAR_0;
 VAR_1->c[7] = 255;
 VAR_1->c[8] = 255;
 VAR_1->req_xfer = 255;
}
