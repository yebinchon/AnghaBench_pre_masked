
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct amd64_pvt {TYPE_1__* F3; TYPE_1__* F2; TYPE_1__* F1; TYPE_1__* F6; TYPE_1__* F0; scalar_t__ umc; } ;
struct TYPE_4__ {int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct amd64_pvt *VAR_1, u16 VAR_2, u16 VAR_3)
{
 if (VAR_1->umc) {
  VAR_1->F0 = FUNC_3(VAR_1->F3->vendor, VAR_2, VAR_1->F3);
  if (!VAR_1->F0) {
   FUNC_0("F0 not found, device 0x%x (broken BIOS?)\n", VAR_2);
   return -VAR_0;
  }

  VAR_1->F6 = FUNC_3(VAR_1->F3->vendor, VAR_3, VAR_1->F3);
  if (!VAR_1->F6) {
   FUNC_2(VAR_1->F0);
   VAR_1->F0 = ((void*)0);

   FUNC_0("F6 not found: device 0x%x (broken BIOS?)\n", VAR_3);
   return -VAR_0;
  }

  FUNC_1(1, "F0: %s\n", FUNC_4(VAR_1->F0));
  FUNC_1(1, "F3: %s\n", FUNC_4(VAR_1->F3));
  FUNC_1(1, "F6: %s\n", FUNC_4(VAR_1->F6));

  return 0;
 }


 VAR_1->F1 = FUNC_3(VAR_1->F3->vendor, VAR_2, VAR_1->F3);
 if (!VAR_1->F1) {
  FUNC_0("F1 not found: device 0x%x (broken BIOS?)\n", VAR_2);
  return -VAR_0;
 }


 VAR_1->F2 = FUNC_3(VAR_1->F3->vendor, VAR_3, VAR_1->F3);
 if (!VAR_1->F2) {
  FUNC_2(VAR_1->F1);
  VAR_1->F1 = ((void*)0);

  FUNC_0("F2 not found: device 0x%x (broken BIOS?)\n", VAR_3);
  return -VAR_0;
 }

 FUNC_1(1, "F1: %s\n", FUNC_4(VAR_1->F1));
 FUNC_1(1, "F2: %s\n", FUNC_4(VAR_1->F2));
 FUNC_1(1, "F3: %s\n", FUNC_4(VAR_1->F3));

 return 0;
}
