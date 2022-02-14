
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {int dummy; } ;
struct si_sm_data {int smic_timeout; scalar_t__ truncated; scalar_t__ error_retries; scalar_t__ read_pos; scalar_t__ orig_write_count; scalar_t__ write_count; scalar_t__ write_pos; struct si_sm_io* io; int state; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct si_sm_data *VAR_2,
       struct si_sm_io *VAR_3)
{
 VAR_2->state = VAR_0;
 VAR_2->io = VAR_3;
 VAR_2->write_pos = 0;
 VAR_2->write_count = 0;
 VAR_2->orig_write_count = 0;
 VAR_2->read_pos = 0;
 VAR_2->error_retries = 0;
 VAR_2->truncated = 0;
 VAR_2->smic_timeout = VAR_1;


 return 3;
}
