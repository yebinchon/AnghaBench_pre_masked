
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_4__ {int dev; } ;
struct smi_info {TYPE_2__ io; int si_sm; TYPE_1__* handlers; } ;
struct TYPE_3__ {unsigned long (* get_result ) (int ,unsigned char*,int ) ;int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long,...) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 unsigned long FUNC_4 (int ,unsigned char*,int ) ;
 int FUNC_5 (struct smi_info*) ;

__attribute__((used)) static int FUNC_6(struct smi_info *VAR_6, u8 VAR_7)
{
 unsigned char VAR_8[3];
 unsigned char *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8[0] = VAR_4 << 2;
 VAR_8[1] = VAR_5;
 VAR_8[2] = VAR_7;
 VAR_6->handlers->start_transaction(VAR_6->si_sm, VAR_8, 3);

 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11) {
  FUNC_0(VAR_6->io.dev,
    "Error getting response from set global enables command: %d\n",
    VAR_11);
  goto out;
 }

 VAR_10 = VAR_6->handlers->get_result(VAR_6->si_sm,
        VAR_9, VAR_3);

 if (VAR_10 < 3 ||
   VAR_9[0] != (VAR_4 | 1) << 2 ||
   VAR_9[1] != VAR_5) {
  FUNC_0(VAR_6->io.dev,
    "Invalid return from set global enables command: %ld %x %x\n",
    VAR_10, VAR_9[0], VAR_9[1]);
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_9[2] != 0)
  VAR_11 = 1;

out:
 FUNC_1(VAR_9);
 return VAR_11;
}
