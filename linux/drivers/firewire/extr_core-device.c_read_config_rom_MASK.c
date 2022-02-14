
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_device {int max_speed; int* config_rom; int config_rom_length; int max_rec; int cmc; int irmc; TYPE_1__* node; struct fw_card* card; } ;
struct fw_card {int link_speed; scalar_t__ beta_repeaters_present; } ;
struct TYPE_2__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (struct fw_card*,char*,int,int) ;
 int FUNC_3 (int const*) ;
 int* FUNC_4 (int,int ) ;
 int* FUNC_5 (int*,int,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct fw_device*,int,int,int*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fw_device *VAR_11, int VAR_12)
{
 struct fw_card *VAR_13 = VAR_11->card;
 const u32 *VAR_14, *VAR_15;
 u32 *VAR_16, *VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_16 = FUNC_4(sizeof(*VAR_16) * VAR_5 +
        sizeof(*VAR_17) * VAR_5, VAR_4);
 if (VAR_16 == ((void*)0))
  return -VAR_2;

 VAR_17 = &VAR_16[VAR_5];
 FUNC_6(VAR_16, 0, sizeof(*VAR_16) * VAR_5);

 VAR_11->max_speed = VAR_8;


 for (VAR_20 = 0; VAR_20 < 5; VAR_20++) {
  VAR_23 = FUNC_7(VAR_11, VAR_12, VAR_20, &VAR_16[VAR_20]);
  if (VAR_23 != VAR_7)
   goto out;
  if (VAR_20 == 0 && VAR_16[VAR_20] == 0) {
   VAR_23 = VAR_6;
   goto out;
  }
 }

 VAR_11->max_speed = VAR_11->node->max_speed;
 if ((VAR_16[2] & 0x7) < VAR_11->max_speed ||
     VAR_11->max_speed == VAR_9 ||
     VAR_13->beta_repeaters_present) {
  u32 VAR_24;


  if (VAR_11->max_speed == VAR_9)
   VAR_11->max_speed = VAR_13->link_speed;

  while (VAR_11->max_speed > VAR_8) {
   if (FUNC_7(VAR_11, VAR_12, 0, &VAR_24) ==
       VAR_7)
    break;
   VAR_11->max_speed--;
  }
 }
 VAR_22 = VAR_20;
 VAR_18 = 0;
 VAR_17[VAR_18++] = 0xc0000005;
 while (VAR_18 > 0) {






  VAR_19 = VAR_17[--VAR_18];
  VAR_20 = VAR_19 & 0xffffff;
  if (FUNC_0(VAR_20 >= VAR_5)) {
   VAR_23 = -VAR_3;
   goto out;
  }


  VAR_23 = FUNC_7(VAR_11, VAR_12, VAR_20, &VAR_16[VAR_20]);
  if (VAR_23 != VAR_7)
   goto out;
  VAR_21 = VAR_20 + (VAR_16[VAR_20] >> 16) + 1;
  if (VAR_21 > VAR_5) {





   FUNC_2(VAR_13, "skipped invalid ROM block %x at %llx\n",
          VAR_16[VAR_20],
          VAR_20 * 4 | VAR_1 | VAR_0);
   VAR_16[VAR_20] = 0;
   VAR_21 = VAR_20;
  }
  VAR_20++;






  for (; VAR_20 < VAR_21; VAR_20++) {
   VAR_23 = FUNC_7(VAR_11, VAR_12, VAR_20, &VAR_16[VAR_20]);
   if (VAR_23 != VAR_7)
    goto out;

   if ((VAR_19 >> 30) != 3 || (VAR_16[VAR_20] >> 30) < 2)
    continue;







   if (VAR_20 + (VAR_16[VAR_20] & 0xffffff) >= VAR_5) {
    FUNC_2(VAR_13,
           "skipped unsupported ROM entry %x at %llx\n",
           VAR_16[VAR_20],
           VAR_20 * 4 | VAR_1 | VAR_0);
    VAR_16[VAR_20] = 0;
    continue;
   }
   VAR_17[VAR_18++] = VAR_20 + VAR_16[VAR_20];
  }
  if (VAR_22 < VAR_20)
   VAR_22 = VAR_20;
 }

 VAR_14 = VAR_11->config_rom;
 VAR_15 = FUNC_5(VAR_16, VAR_22 * 4, VAR_4);
 if (VAR_15 == ((void*)0)) {
  VAR_23 = -VAR_2;
  goto out;
 }

 FUNC_1(&VAR_10);
 VAR_11->config_rom = VAR_15;
 VAR_11->config_rom_length = VAR_22;
 FUNC_8(&VAR_10);

 FUNC_3(VAR_14);
 VAR_23 = VAR_7;
 VAR_11->max_rec = VAR_16[2] >> 12 & 0xf;
 VAR_11->cmc = VAR_16[2] >> 30 & 1;
 VAR_11->irmc = VAR_16[2] >> 31 & 1;
 out:
 FUNC_3(VAR_16);

 return VAR_23;
}
