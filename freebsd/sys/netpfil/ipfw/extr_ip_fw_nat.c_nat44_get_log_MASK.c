
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockopt_data {size_t valsize; } ;
struct nat44_cfg_nat {scalar_t__ size; int name; } ;
struct ip_fw_chain {int nat; } ;
struct cfg_nat {TYPE_3__* lib; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ head; } ;
struct _ipfw_obj_header {TYPE_2__ ntlv; } ;
typedef struct _ipfw_obj_header ipfw_obj_header ;
typedef int ip_fw3_opheader ;
struct TYPE_6__ {int * logDesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct cfg_nat*,struct nat44_cfg_nat*) ;
 scalar_t__ FUNC_3 (struct sockopt_data*,size_t) ;
 scalar_t__ FUNC_4 (struct sockopt_data*,scalar_t__) ;
 struct cfg_nat* FUNC_5 (int *,int ) ;
 int FUNC_6 (void*,int *,scalar_t__) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct ip_fw_chain *VAR_5, ip_fw3_opheader *VAR_6,
    struct sockopt_data *VAR_7)
{
 ipfw_obj_header *VAR_8;
 struct nat44_cfg_nat *VAR_9;
 struct cfg_nat *VAR_10;
 void *VAR_11;
 size_t VAR_12;

 VAR_12 = sizeof(*VAR_8) + sizeof(*VAR_9);

 if (VAR_7->valsize < VAR_12)
  return (VAR_0);

 VAR_8 = (struct _ipfw_obj_header *)FUNC_3(VAR_7, VAR_12);


 if (VAR_8->ntlv.head.length != sizeof(VAR_8->ntlv))
  return (VAR_0);

 VAR_9 = (struct nat44_cfg_nat *)(VAR_8 + 1);


 if (FUNC_7(VAR_9->name, sizeof(VAR_9->name)) == sizeof(VAR_9->name))
  return (VAR_0);

 FUNC_0(VAR_5);
 VAR_10 = FUNC_5(&VAR_5->nat, VAR_9->name);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_5);
  return (VAR_3);
 }

 if (VAR_10->lib->logDesc == ((void*)0)) {
  FUNC_1(VAR_5);
  return (VAR_1);
 }

 FUNC_2(VAR_10, VAR_9);


 VAR_9->size = sizeof(struct nat44_cfg_nat) + VAR_4;
 if (VAR_7->valsize < VAR_12 + sizeof(*VAR_8)) {







  FUNC_1(VAR_5);
  return (VAR_2);
 }

 VAR_11 = (void *)FUNC_4(VAR_7, VAR_4);
 FUNC_6(VAR_11, VAR_10->lib->logDesc, VAR_4);

 FUNC_1(VAR_5);

 return (0);
}
