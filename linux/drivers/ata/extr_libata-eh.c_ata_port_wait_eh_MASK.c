
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int pflags; int scsi_host; int lock; int eh_wait_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int VAR_3 ;

void FUNC_8(struct ata_port *VAR_4)
{
 unsigned long VAR_5;
 FUNC_0(VAR_3);

 retry:
 FUNC_6(VAR_4->lock, VAR_5);

 while (VAR_4->pflags & (VAR_1 | VAR_0)) {
  FUNC_3(&VAR_4->eh_wait_q, &VAR_3, VAR_2);
  FUNC_7(VAR_4->lock, VAR_5);
  FUNC_4();
  FUNC_6(VAR_4->lock, VAR_5);
 }
 FUNC_2(&VAR_4->eh_wait_q, &VAR_3);

 FUNC_7(VAR_4->lock, VAR_5);


 if (FUNC_5(VAR_4->scsi_host)) {
  FUNC_1(VAR_4, 10);
  goto retry;
 }
}
