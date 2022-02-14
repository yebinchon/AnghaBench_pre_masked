
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_gid_attr {int gid_type; } ;
struct ib_device {int dummy; } ;
typedef enum gid_op_type { ____Placeholder_gid_op_type } gid_op_type ;




 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_1 (struct ib_device*,int ,union ib_gid*,struct ib_gid_attr*) ;
 unsigned long FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_3(enum gid_op_type VAR_1, struct ib_device *VAR_2,
         u8 VAR_3, union ib_gid *VAR_4,
         struct ib_gid_attr *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = FUNC_2(VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ((1UL << VAR_6) & VAR_7) {
   VAR_5->gid_type = VAR_6;
   switch (VAR_1) {
   case 129:
    FUNC_0(VAR_2, VAR_3,
       VAR_4, VAR_5);
    break;
   case 128:
    FUNC_1(VAR_2, VAR_3,
       VAR_4, VAR_5);
    break;
   }
  }
 }
}
