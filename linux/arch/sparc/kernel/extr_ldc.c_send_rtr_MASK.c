
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_packet {scalar_t__ seqid; int env; } ;
struct TYPE_2__ {int mode; } ;
struct ldc_channel {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,int ,int ,int *,int ,unsigned long*) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_4)
{
 struct ldc_packet *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3, ((void*)0), 0,
       &VAR_6);
 if (VAR_5) {
  VAR_5->env = VAR_4->cfg.mode;
  VAR_5->seqid = 0;

  FUNC_1(VAR_1, "SEND RTR env[0x%x] seqid[0x%x]\n",
         VAR_5->env, VAR_5->seqid);

  return FUNC_2(VAR_4, VAR_5, VAR_6);
 }
 return -VAR_0;
}
