
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sysinfo_1_1_1 {int sequence; int plant; int manufacturer; int type; } ;
struct TYPE_2__ {int infmval1; int infmseq; int infmpman; int infmmanu; int infmtype; scalar_t__ infmname; } ;
struct sthyi_sctns {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sysinfo_1_1_1*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct sthyi_sctns *VAR_2,
     struct sysinfo_1_1_1 *VAR_3)
{
 FUNC_1(VAR_2->mac.infmname);
 if (*(u64 *)VAR_2->mac.infmname != 0)
  VAR_2->mac.infmval1 |= VAR_1;

 if (FUNC_2(VAR_3, 1, 1, 1))
  return;

 FUNC_0(VAR_2->mac.infmtype, VAR_3->type, sizeof(VAR_2->mac.infmtype));
 FUNC_0(VAR_2->mac.infmmanu, VAR_3->manufacturer, sizeof(VAR_2->mac.infmmanu));
 FUNC_0(VAR_2->mac.infmpman, VAR_3->plant, sizeof(VAR_2->mac.infmpman));
 FUNC_0(VAR_2->mac.infmseq, VAR_3->sequence, sizeof(VAR_2->mac.infmseq));

 VAR_2->mac.infmval1 |= VAR_0;
}
