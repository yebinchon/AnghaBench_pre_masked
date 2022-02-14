
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(
  struct amdgpu_device *VAR_10,
  bool VAR_11)
{
 uint32_t VAR_12, VAR_13;
 int VAR_14;

 if (VAR_11 && (VAR_10->cg_flags & VAR_0)) {
  for (VAR_14 = 0; VAR_14 < VAR_10->sdma.num_instances; VAR_14++) {
   VAR_13 = VAR_12 = FUNC_0(VAR_14, VAR_9);
   VAR_12 &= ~(VAR_8 |
      VAR_7 |
      VAR_6 |
      VAR_5 |
      VAR_4 |
      VAR_3 |
      VAR_2 |
      VAR_1);
   if (VAR_13 != VAR_12)
    FUNC_1(VAR_14, VAR_9, VAR_12);
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_10->sdma.num_instances; VAR_14++) {
   VAR_13 = VAR_12 = FUNC_0(VAR_14, VAR_9);
   VAR_12 |= (VAR_8 |
     VAR_7 |
     VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1);
   if (VAR_13 != VAR_12)
    FUNC_1(VAR_14, VAR_9, VAR_12);
  }
 }
}
