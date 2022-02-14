
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {TYPE_1__** csrows; } ;
struct i82875p_error_info {int errsts; int errsts2; int eap; int des; int derrsyn; } ;
struct TYPE_2__ {int nr_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,int) ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,int,int ,int ,int,int,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_3,
    struct i82875p_error_info *VAR_4,
    int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_3->csrows[0]->nr_channels - 1;

 if (!(VAR_4->errsts & 0x0081))
  return 0;

 if (!VAR_5)
  return 1;

 if ((VAR_4->errsts ^ VAR_4->errsts2) & 0x0081) {
  FUNC_1(VAR_1, VAR_3, 1, 0, 0, 0,
         -1, -1, -1,
         "UE overwrote CE", "");
  VAR_4->errsts = VAR_4->errsts2;
 }

 VAR_4->eap >>= VAR_2;
 VAR_6 = FUNC_0(VAR_3, VAR_4->eap);

 if (VAR_4->errsts & 0x0080)
  FUNC_1(VAR_1, VAR_3, 1,
         VAR_4->eap, 0, 0,
         VAR_6, -1, -1,
         "i82875p UE", "");
 else
  FUNC_1(VAR_0, VAR_3, 1,
         VAR_4->eap, 0, VAR_4->derrsyn,
         VAR_6, VAR_7 ? (VAR_4->des & 0x1) : 0,
         -1, "i82875p CE", "");

 return 1;
}
