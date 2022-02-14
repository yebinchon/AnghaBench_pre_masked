
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {scalar_t__ error_retries; int smic_timeout; int state; scalar_t__ read_pos; scalar_t__ write_pos; int orig_write_count; int write_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_1(struct si_sm_data *VAR_6, char *VAR_7)
{
 (VAR_6->error_retries)++;
 if (VAR_6->error_retries > VAR_2) {
  if (VAR_5 & VAR_0)
   FUNC_0("ipmi_smic_drv: smic hosed: %s\n", VAR_7);
  VAR_6->state = VAR_1;
 } else {
  VAR_6->write_count = VAR_6->orig_write_count;
  VAR_6->write_pos = 0;
  VAR_6->read_pos = 0;
  VAR_6->state = VAR_4;
  VAR_6->smic_timeout = VAR_3;
 }
}
