
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int fam; int model; int F3; int F6; int F2; } ;
struct TYPE_3__ {int scrubval; int bandwidth; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (struct amd64_pvt*,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_6)
{
 struct amd64_pvt *VAR_7 = VAR_6->pvt_info;
 int VAR_8, VAR_9 = -VAR_0;
 u32 VAR_10 = 0;

 switch (VAR_7->fam) {
 case 0x15:

  if (VAR_7->model < 0x10)
   FUNC_3(VAR_7, 0);

  if (VAR_7->model == 0x60)
   FUNC_2(VAR_7->F2, VAR_1, &VAR_10);
  break;

 case 0x17:
 case 0x18:
  FUNC_2(VAR_7->F6, VAR_2, &VAR_10);
  if (VAR_10 & FUNC_1(0)) {
   FUNC_2(VAR_7->F6, VAR_3, &VAR_10);
   VAR_10 &= 0xF;
   VAR_10 += 0x5;
  } else {
   VAR_10 = 0;
  }
  break;

 default:
  FUNC_2(VAR_7->F3, VAR_4, &VAR_10);
  break;
 }

 VAR_10 = VAR_10 & 0x001F;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  if (VAR_5[VAR_8].scrubval == VAR_10) {
   VAR_9 = VAR_5[VAR_8].bandwidth;
   break;
  }
 }
 return VAR_9;
}
