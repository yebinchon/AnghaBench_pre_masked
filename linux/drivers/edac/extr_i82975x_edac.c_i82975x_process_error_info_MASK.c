
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mem_ctl_info {TYPE_3__** csrows; } ;
struct i82975x_error_info {int errsts2; int errsts; int eap; int xeap; int derrsyn; } ;
struct TYPE_6__ {int nr_channels; TYPE_2__** channels; } ;
struct TYPE_5__ {TYPE_1__* dimm; } ;
struct TYPE_4__ {int grain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mem_ctl_info*,unsigned long) ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,unsigned long,unsigned long,int ,int,int,int,char*,char*) ;
 int FUNC_2 (struct mem_ctl_info*,int ,char*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_4,
  struct i82975x_error_info *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;

 if (!(VAR_5->errsts2 & 0x0003))
  return 0;

 if (!VAR_6)
  return 1;

 if ((VAR_5->errsts ^ VAR_5->errsts2) & 0x0003) {
  FUNC_1(VAR_1, VAR_4, 1, 0, 0, 0,
         -1, -1, -1, "UE overwrote CE", "");
  VAR_5->errsts = VAR_5->errsts2;
 }

 VAR_10 = (unsigned long) VAR_5->eap;
 VAR_10 >>= 1;
 if (VAR_5->xeap & 1)
  VAR_10 |= 0x80000000;
 VAR_10 >>= (VAR_3 - 1);
 VAR_7 = FUNC_0(VAR_4, VAR_10);

 if (VAR_7 == -1) {
  FUNC_2(VAR_4, VAR_2, "error processing EAP:\n"
   "\tXEAP=%u\n"
   "\t EAP=0x%08x\n"
   "\tPAGE=0x%08x\n",
   (VAR_5->xeap & 1) ? 1 : 0, VAR_5->eap, (unsigned int) VAR_10);
  return 0;
 }
 VAR_8 = (VAR_4->csrows[VAR_7]->nr_channels == 1) ? 0 : VAR_5->eap & 1;
 VAR_9 = VAR_5->eap
   & ((1 << VAR_3) -
      (1 << VAR_4->csrows[VAR_7]->channels[VAR_8]->dimm->grain));

 if (VAR_5->errsts & 0x0002)
  FUNC_1(VAR_1, VAR_4, 1,
         VAR_10, VAR_9, 0,
         VAR_7, -1, -1,
         "i82975x UE", "");
 else
  FUNC_1(VAR_0, VAR_4, 1,
         VAR_10, VAR_9, VAR_5->derrsyn,
         VAR_7, VAR_8 ? VAR_8 : 0, -1,
         "i82975x CE", "");

 return 1;
}
