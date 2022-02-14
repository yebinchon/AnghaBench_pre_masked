
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smca_hwid {unsigned int hwid_mcatype; int count; } ;
struct TYPE_2__ {int id; scalar_t__ sysfs_id; struct smca_hwid* hwid; } ;


 unsigned int FUNC_0 (struct smca_hwid*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int,int*,int*) ;
 scalar_t__ FUNC_7 (unsigned int,int ,int*,int*) ;
 TYPE_1__* VAR_2 ;
 struct smca_hwid* VAR_3 ;
 int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (int,int,int) ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 struct smca_hwid *VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11 = FUNC_3(VAR_4);


 if (!FUNC_6(VAR_11, &VAR_10, &VAR_9)) {
  VAR_9 |= FUNC_1(0);
  if ((VAR_10 & FUNC_1(5)) && !((VAR_9 >> 5) & 0x3))
   VAR_9 |= FUNC_1(5);

  FUNC_9(VAR_11, VAR_10, VAR_9);
 }

 FUNC_8(VAR_4, VAR_5);


 if (VAR_2[VAR_4].hwid)
  return;

 if (FUNC_7(VAR_5, FUNC_4(VAR_4), &VAR_10, &VAR_9)) {
  FUNC_5("Failed to read MCA_IPID for bank %d\n", VAR_4);
  return;
 }

 VAR_7 = FUNC_2(VAR_9 & VAR_0,
        (VAR_9 & VAR_1) >> 16);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  VAR_8 = &VAR_3[VAR_6];
  if (VAR_7 == VAR_8->hwid_mcatype) {
   VAR_2[VAR_4].hwid = VAR_8;
   VAR_2[VAR_4].id = VAR_10;
   VAR_2[VAR_4].sysfs_id = VAR_8->count++;
   break;
  }
 }
}
