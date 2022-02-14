
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {int cg_flags; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;

__attribute__((used)) static void FUNC_2(
  struct amdgpu_device *VAR_11,
  bool VAR_12)
{
 uint32_t VAR_13, VAR_14;
 int VAR_15;

 if (VAR_12 && (VAR_11->cg_flags & VAR_0)) {
  for (VAR_15 = 0; VAR_15 < VAR_11->sdma.num_instances; VAR_15++) {
   VAR_13 = VAR_14 = FUNC_0(VAR_9 + VAR_10[VAR_15]);
   VAR_14 &= ~(VAR_8 |
      VAR_7 |
      VAR_6 |
      VAR_5 |
      VAR_4 |
      VAR_3 |
      VAR_2 |
      VAR_1);
   if (VAR_14 != VAR_13)
    FUNC_1(VAR_9 + VAR_10[VAR_15], VAR_14);
  }
 } else {
  for (VAR_15 = 0; VAR_15 < VAR_11->sdma.num_instances; VAR_15++) {
   VAR_13 = VAR_14 = FUNC_0(VAR_9 + VAR_10[VAR_15]);
   VAR_14 |= VAR_8 |
    VAR_7 |
    VAR_6 |
    VAR_5 |
    VAR_4 |
    VAR_3 |
    VAR_2 |
    VAR_1;

   if (VAR_14 != VAR_13)
    FUNC_1(VAR_9 + VAR_10[VAR_15], VAR_14);
  }
 }
}
