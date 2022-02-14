
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int prot_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(struct scsi_cmnd *VAR_4, u8 *VAR_5)
{
 *VAR_5 = 0;
 if (VAR_4->prot_flags & VAR_3)
  *VAR_5 |= VAR_1;
 if (VAR_4->prot_flags & VAR_2)
  *VAR_5 |= VAR_0;
}
