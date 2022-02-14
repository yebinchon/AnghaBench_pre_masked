
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct switch_log_entry {scalar_t__ timebase; scalar_t__ val; scalar_t__ type; int spu_id; TYPE_1__ tstamp; } ;
struct spu_context {TYPE_2__* switch_log; } ;
struct TYPE_4__ {int tail; struct switch_log_entry* log; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,unsigned long long,unsigned int,int ,unsigned int,unsigned int,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct spu_context *VAR_1, char *VAR_2, int VAR_3)
{
 struct switch_log_entry *VAR_4;

 VAR_4 = VAR_1->switch_log->log + VAR_1->switch_log->tail % VAR_0;

 return FUNC_0(VAR_2, VAR_3, "%llu.%09u %d %u %u %llu\n",
   (unsigned long long) VAR_4->tstamp.tv_sec,
   (unsigned int) VAR_4->tstamp.tv_nsec,
   VAR_4->spu_id,
   (unsigned int) VAR_4->type,
   (unsigned int) VAR_4->val,
   (unsigned long long) VAR_4->timebase);
}
