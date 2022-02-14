
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int err_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_1)
{
 if (VAR_1->err_mask && ((VAR_1->err_mask & VAR_0) == 0)) {





  FUNC_0(VAR_1);
 }

 FUNC_1(VAR_1);
}
