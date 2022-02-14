
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x_job_gather {int offset; int bo; scalar_t__ words; } ;
struct host1x_firewall {int class; size_t offset; int mask; int reg; int count; scalar_t__ words; int cmdbuf; TYPE_1__* job; } ;
struct TYPE_2__ {scalar_t__ gather_copy_mapped; } ;


 int VAR_0 ;
 int FUNC_0 (struct host1x_firewall*,int) ;
 int FUNC_1 (struct host1x_firewall*) ;
 int FUNC_2 (struct host1x_firewall*) ;
 int FUNC_3 (struct host1x_firewall*) ;

__attribute__((used)) static int FUNC_4(struct host1x_firewall *VAR_1, struct host1x_job_gather *VAR_2)
{
 u32 *VAR_3 = (u32 *)VAR_1->job->gather_copy_mapped +
  (VAR_2->offset / sizeof(u32));
 u32 VAR_4 = VAR_1->class;
 int VAR_5 = 0;

 VAR_1->words = VAR_2->words;
 VAR_1->cmdbuf = VAR_2->bo;
 VAR_1->offset = 0;

 while (VAR_1->words && !VAR_5) {
  u32 VAR_6 = VAR_3[VAR_1->offset];
  u32 VAR_7 = (VAR_6 & 0xf0000000) >> 28;

  VAR_1->mask = 0;
  VAR_1->reg = 0;
  VAR_1->count = 0;
  VAR_1->words--;
  VAR_1->offset++;

  switch (VAR_7) {
  case 0:
   VAR_1->class = VAR_6 >> 6 & 0x3ff;
   VAR_1->mask = VAR_6 & 0x3f;
   VAR_1->reg = VAR_6 >> 16 & 0xfff;
   VAR_5 = FUNC_0(VAR_1, VAR_4);
   if (!VAR_5)
    VAR_5 = FUNC_2(VAR_1);
   if (VAR_5)
    goto out;
   break;
  case 1:
   VAR_1->reg = VAR_6 >> 16 & 0xfff;
   VAR_1->count = VAR_6 & 0xffff;
   VAR_5 = FUNC_1(VAR_1);
   if (VAR_5)
    goto out;
   break;

  case 2:
   VAR_1->reg = VAR_6 >> 16 & 0xfff;
   VAR_1->count = VAR_6 & 0xffff;
   VAR_5 = FUNC_3(VAR_1);
   if (VAR_5)
    goto out;
   break;

  case 3:
   VAR_1->mask = VAR_6 & 0xffff;
   VAR_1->reg = VAR_6 >> 16 & 0xfff;
   VAR_5 = FUNC_2(VAR_1);
   if (VAR_5)
    goto out;
   break;
  case 4:
  case 14:
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  }
 }

out:
 return VAR_5;
}
