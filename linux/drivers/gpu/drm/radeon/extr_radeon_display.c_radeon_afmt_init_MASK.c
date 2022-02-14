
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__** afmt; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ mode_info; } ;
struct radeon_afmt {int dummy; } ;
struct TYPE_3__ {int offset; int id; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 scalar_t__ FUNC_7 (struct radeon_device*) ;
 scalar_t__ FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_7->mode_info.afmt[VAR_8] = ((void*)0);

 if (FUNC_8(VAR_7)) {

 } else if (FUNC_3(VAR_7)) {
  static uint32_t VAR_9[] = {
   133,
   132,
   131,
   130,
   129,
   128,
   0x13830 - 0x7030,
  };
  int VAR_10;





  if (FUNC_7(VAR_7))
   VAR_10 = 7;
  else if (FUNC_6(VAR_7))
   VAR_10 = 6;
  else if (FUNC_5(VAR_7))
   VAR_10 = 6;
  else if (FUNC_4(VAR_7))
   VAR_10 = 2;
  else
   VAR_10 = 6;

  FUNC_9(VAR_10 > FUNC_0(VAR_9));
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   VAR_7->mode_info.afmt[VAR_8] = FUNC_10(sizeof(struct radeon_afmt), VAR_5);
   if (VAR_7->mode_info.afmt[VAR_8]) {
    VAR_7->mode_info.afmt[VAR_8]->offset = VAR_9[VAR_8];
    VAR_7->mode_info.afmt[VAR_8]->id = VAR_8;
   }
  }
 } else if (FUNC_2(VAR_7)) {

  VAR_7->mode_info.afmt[0] = FUNC_10(sizeof(struct radeon_afmt), VAR_5);
  if (VAR_7->mode_info.afmt[0]) {
   VAR_7->mode_info.afmt[0]->offset = VAR_3;
   VAR_7->mode_info.afmt[0]->id = 0;
  }
  VAR_7->mode_info.afmt[1] = FUNC_10(sizeof(struct radeon_afmt), VAR_5);
  if (VAR_7->mode_info.afmt[1]) {
   VAR_7->mode_info.afmt[1]->offset = VAR_4;
   VAR_7->mode_info.afmt[1]->id = 1;
  }
 } else if (FUNC_1(VAR_7)) {

  VAR_7->mode_info.afmt[0] = FUNC_10(sizeof(struct radeon_afmt), VAR_5);
  if (VAR_7->mode_info.afmt[0]) {
   VAR_7->mode_info.afmt[0]->offset = VAR_1;
   VAR_7->mode_info.afmt[0]->id = 0;
  }

  if (VAR_7->family >= VAR_0) {
   VAR_7->mode_info.afmt[1] = FUNC_10(sizeof(struct radeon_afmt), VAR_5);
   if (VAR_7->mode_info.afmt[1]) {
    VAR_7->mode_info.afmt[1]->offset = VAR_2;
    VAR_7->mode_info.afmt[1]->id = 1;
   }
  }
 }
}
