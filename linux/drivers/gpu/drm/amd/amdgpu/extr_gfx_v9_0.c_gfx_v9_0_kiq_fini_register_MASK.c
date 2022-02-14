
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_ring *VAR_11)
{
 struct amdgpu_device *VAR_12 = VAR_11->adev;
 int VAR_13;


 if (FUNC_1(VAR_1, 0, VAR_2) & 1) {

  FUNC_2(VAR_1, 0, VAR_3, 1);

  for (VAR_13 = 0; VAR_13 < VAR_12->usec_timeout; VAR_13++) {
   if (!(FUNC_1(VAR_1, 0, VAR_2) & 1))
    break;
   FUNC_3(1);
  }

  if (VAR_13 == VAR_0) {
   FUNC_0("KIQ dequeue request failed.\n");


   FUNC_2(VAR_1, 0, VAR_2, 0);
  }

  FUNC_2(VAR_1, 0, VAR_3,
        0);
 }

 FUNC_2(VAR_1, 0, VAR_5, 0);
 FUNC_2(VAR_1, 0, VAR_4, 0);
 FUNC_2(VAR_1, 0, VAR_6, 0);
 FUNC_2(VAR_1, 0, VAR_7, 0x40000000);
 FUNC_2(VAR_1, 0, VAR_7, 0);
 FUNC_2(VAR_1, 0, VAR_8, 0);
 FUNC_2(VAR_1, 0, VAR_9, 0);
 FUNC_2(VAR_1, 0, VAR_10, 0);

 return 0;
}
