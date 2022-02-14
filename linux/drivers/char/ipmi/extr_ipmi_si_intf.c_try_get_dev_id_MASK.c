
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int device_id; int si_sm; TYPE_1__* handlers; } ;
struct TYPE_2__ {unsigned long (* get_result ) (int ,unsigned char*,int ) ;int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char*,unsigned long,int *) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 unsigned long FUNC_4 (int ,unsigned char*,int ) ;
 int FUNC_5 (struct smi_info*) ;

__attribute__((used)) static int FUNC_6(struct smi_info *VAR_5)
{
 unsigned char VAR_6[2];
 unsigned char *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_7)
  return -VAR_0;





 VAR_6[0] = VAR_4 << 2;
 VAR_6[1] = VAR_2;
 VAR_5->handlers->start_transaction(VAR_5->si_sm, VAR_6, 2);

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9)
  goto out;

 VAR_8 = VAR_5->handlers->get_result(VAR_5->si_sm,
        VAR_7, VAR_3);


 VAR_9 = FUNC_0(VAR_7[0] >> 2, VAR_7[1],
   VAR_7 + 2, VAR_8 - 2, &VAR_5->device_id);

out:
 FUNC_1(VAR_7);
 return VAR_9;
}
