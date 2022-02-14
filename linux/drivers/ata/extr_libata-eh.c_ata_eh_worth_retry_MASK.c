
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int err_mask; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct ata_queued_cmd *VAR_4)
{
 if (VAR_4->err_mask & VAR_2)
  return 0;
 if (VAR_4->flags & VAR_3)
  return 1;
 if (VAR_4->err_mask & VAR_1)
  return 0;
 return VAR_4->err_mask != VAR_0;
}
