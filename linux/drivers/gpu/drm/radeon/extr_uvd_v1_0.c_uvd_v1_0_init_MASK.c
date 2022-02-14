
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int ready; } ;
struct radeon_device {int family; struct radeon_ring* ring; } ;







 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_ring*,int) ;
 int FUNC_9 (struct radeon_device*,int,int) ;
 int FUNC_10 (struct radeon_device*) ;

int FUNC_11(struct radeon_device *VAR_10)
{
 struct radeon_ring *VAR_11 = &VAR_10->ring[VAR_2];
 uint32_t VAR_12;
 int VAR_13;


 if (VAR_10->family < VAR_0)
  FUNC_9(VAR_10, 10000, 10000);
 else
  FUNC_9(VAR_10, 53300, 40000);

 VAR_13 = FUNC_10(VAR_10);
 if (VAR_13)
  goto done;

 VAR_11->ready = 1;
 VAR_13 = FUNC_6(VAR_10, VAR_2, VAR_11);
 if (VAR_13) {
  VAR_11->ready = 0;
  goto done;
 }

 VAR_13 = FUNC_5(VAR_10, VAR_11, 10);
 if (VAR_13) {
  FUNC_0("radeon: ring failed to lock UVD ring (%d).\n", VAR_13);
  goto done;
 }

 VAR_12 = FUNC_2(VAR_7, 0);
 FUNC_8(VAR_11, VAR_12);
 FUNC_8(VAR_11, 0xFFFFF);

 VAR_12 = FUNC_2(VAR_8, 0);
 FUNC_8(VAR_11, VAR_12);
 FUNC_8(VAR_11, 0xFFFFF);

 VAR_12 = FUNC_2(VAR_5, 0);
 FUNC_8(VAR_11, VAR_12);
 FUNC_8(VAR_11, 0xFFFFF);


 FUNC_8(VAR_11, FUNC_2(VAR_6, 0));
 FUNC_8(VAR_11, 0x8);

 FUNC_8(VAR_11, FUNC_2(VAR_4, 0));
 FUNC_8(VAR_11, 3);

 FUNC_7(VAR_10, VAR_11, 0);

done:

 FUNC_9(VAR_10, 0, 0);

 if (!VAR_13) {
  switch (VAR_10->family) {
  case 132:
  case 130:
  case 131:

   FUNC_3(VAR_1, 0);
   FUNC_3(VAR_1, 1 << 4);
   FUNC_3(VAR_3, 0x3f);
   FUNC_3(VAR_1, 0x1f);


  case 128:
  case 129:


   FUNC_4(VAR_9, 0x10, ~0x10);
   break;

  default:

   break;
  }

  FUNC_1("UVD initialized successfully.\n");
 }

 return VAR_13;
}
