
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* me_fw; } ;
typedef int __be32 ;
struct TYPE_2__ {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3)
{
 const __be32 *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_3(VAR_3)) {
  FUNC_2("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }

 if (VAR_3->me_fw) {
  VAR_6 = VAR_3->me_fw->size / 4;
  VAR_4 = (const __be32 *)&VAR_3->me_fw->data[0];
  FUNC_0(VAR_0, 0);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += 2) {
   FUNC_0(VAR_1,
          FUNC_1(&VAR_4[VAR_5]));
   FUNC_0(VAR_2,
          FUNC_1(&VAR_4[VAR_5 + 1]));
  }
 }
}
