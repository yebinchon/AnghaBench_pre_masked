
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {unsigned long last_lpm_change; scalar_t__ lpm_policy; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned long) ;

bool FUNC_2(struct ata_link *VAR_4)
{
 unsigned long VAR_5 = VAR_4->last_lpm_change +
        FUNC_0(VAR_2);


 if (VAR_4->lpm_policy > VAR_1)
  return 1;




 if ((VAR_4->flags & VAR_0) &&
     FUNC_1(VAR_3, VAR_5))
  return 1;

 return 0;
}
