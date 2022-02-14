
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ os_type; int starting_lba; } ;
typedef TYPE_1__ gpt_mbr_record ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(gpt_mbr_record *VAR_3)
{
 if (VAR_3->os_type != VAR_0)
  goto invalid;


 if (FUNC_0(VAR_3->starting_lba) != VAR_2)
  goto invalid;

 return VAR_1;
invalid:
 return 0;
}
