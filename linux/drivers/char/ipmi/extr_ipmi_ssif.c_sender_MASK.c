
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct ssif_info {int ssif_debug; TYPE_1__* client; struct ipmi_smi_msg* waiting_msg; } ;
struct ipmi_smi_msg {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ipmi_smi_msg*) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ,int ,long long,long) ;
 unsigned long* FUNC_2 (struct ssif_info*,unsigned long*) ;
 int FUNC_3 (struct timespec64*) ;
 int FUNC_4 (struct ssif_info*,unsigned long*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2,
     struct ipmi_smi_msg *VAR_3)
{
 struct ssif_info *VAR_4 = (struct ssif_info *) VAR_2;
 unsigned long VAR_5, *VAR_6;

 FUNC_0(VAR_4->waiting_msg);
 VAR_4->waiting_msg = VAR_3;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 FUNC_4(VAR_4, VAR_6);

 if (VAR_4->ssif_debug & VAR_1) {
  struct timespec64 VAR_7;

  FUNC_3(&VAR_7);
  FUNC_1(&VAR_4->client->dev,
   "**Enqueue %02x %02x: %lld.%6.6ld\n",
   VAR_3->data[0], VAR_3->data[1],
   (long long)VAR_7.tv_sec, (long)VAR_7.tv_nsec / VAR_0);
 }
}
