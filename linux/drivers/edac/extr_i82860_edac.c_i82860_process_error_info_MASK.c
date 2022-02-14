
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_ctl_info {TYPE_2__** csrows; } ;
struct i82860_error_info {int errsts2; int errsts; int eap; int derrsyn; } ;
struct dimm_info {int* location; } ;
struct TYPE_4__ {TYPE_1__** channels; } ;
struct TYPE_3__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,int) ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,int,int ,int ,int,int,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_3,
    struct i82860_error_info *VAR_4,
    int VAR_5)
{
 struct dimm_info *VAR_6;
 int VAR_7;

 if (!(VAR_4->errsts2 & 0x0003))
  return 0;

 if (!VAR_5)
  return 1;

 if ((VAR_4->errsts ^ VAR_4->errsts2) & 0x0003) {
  FUNC_1(VAR_1, VAR_3, 1, 0, 0, 0,
         -1, -1, -1, "UE overwrote CE", "");
  VAR_4->errsts = VAR_4->errsts2;
 }

 VAR_4->eap >>= VAR_2;
 VAR_7 = FUNC_0(VAR_3, VAR_4->eap);
 VAR_6 = VAR_3->csrows[VAR_7]->channels[0]->dimm;

 if (VAR_4->errsts & 0x0002)
  FUNC_1(VAR_1, VAR_3, 1,
         VAR_4->eap, 0, 0,
         VAR_6->location[0], VAR_6->location[1], -1,
         "i82860 UE", "");
 else
  FUNC_1(VAR_0, VAR_3, 1,
         VAR_4->eap, 0, VAR_4->derrsyn,
         VAR_6->location[0], VAR_6->location[1], -1,
         "i82860 CE", "");

 return 1;
}
