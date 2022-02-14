
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amd64_pvt {int fam; int model; int F3; int F2; } ;
struct TYPE_3__ {scalar_t__ scrubval; scalar_t__ bandwidth; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amd64_pvt*,scalar_t__) ;
 int FUNC_2 (struct amd64_pvt*,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct amd64_pvt *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2) - 1; VAR_7++) {




  if (VAR_2[VAR_7].scrubval < VAR_5)
   continue;

  if (VAR_2[VAR_7].bandwidth <= VAR_4)
   break;
 }

 VAR_6 = VAR_2[VAR_7].scrubval;

 if (VAR_3->fam == 0x17 || VAR_3->fam == 0x18) {
  FUNC_1(VAR_3, VAR_6);
 } else if (VAR_3->fam == 0x15 && VAR_3->model == 0x60) {
  FUNC_2(VAR_3, 0);
  FUNC_3(VAR_3->F2, VAR_0, VAR_6, 0x001F);
  FUNC_2(VAR_3, 1);
  FUNC_3(VAR_3->F2, VAR_0, VAR_6, 0x001F);
 } else {
  FUNC_3(VAR_3->F3, VAR_1, VAR_6, 0x001F);
 }

 if (VAR_6)
  return VAR_2[VAR_7].bandwidth;

 return 0;
}
