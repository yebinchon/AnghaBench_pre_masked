
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_scsi_request {unsigned int* cdb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct skd_scsi_request *VAR_3,
  int VAR_4, unsigned VAR_5,
  unsigned VAR_6)
{
 if (VAR_4 == VAR_0)
  VAR_3->cdb[0] = VAR_1;
 else
  VAR_3->cdb[0] = VAR_2;

 VAR_3->cdb[1] = 0;
 VAR_3->cdb[2] = (VAR_5 & 0xff000000) >> 24;
 VAR_3->cdb[3] = (VAR_5 & 0xff0000) >> 16;
 VAR_3->cdb[4] = (VAR_5 & 0xff00) >> 8;
 VAR_3->cdb[5] = (VAR_5 & 0xff);
 VAR_3->cdb[6] = 0;
 VAR_3->cdb[7] = (VAR_6 & 0xff00) >> 8;
 VAR_3->cdb[8] = VAR_6 & 0xff;
 VAR_3->cdb[9] = 0;
}
