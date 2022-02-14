
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int serror; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {struct ata_eh_context eh_context; } ;
typedef enum ata_lpm_policy { ____Placeholder_ata_lpm_policy } ata_lpm_policy ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_link*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ata_link*,int ,int*) ;
 int FUNC_4 (struct ata_link*,int ,int) ;

int FUNC_5(struct ata_link *VAR_3, enum ata_lpm_policy VAR_4,
        bool VAR_5)
{
 struct ata_eh_context *VAR_6 = &VAR_3->eh_context;
 bool VAR_7 = 0;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 switch (VAR_4) {
 case 132:

  VAR_8 |= (0x7 << 8);

  if (VAR_5) {
   VAR_8 |= (0x4 << 12);
   VAR_7 = 1;
  }
  break;
 case 131:

  VAR_8 &= ~(0x1 << 8);
  VAR_8 |= (0x6 << 8);
  break;
 case 130:
 case 128:
 case 129:
  if (FUNC_1(VAR_3) > 0)

   VAR_8 &= ~(0x7 << 8);
  else {

   VAR_8 &= ~0xf;
   VAR_8 |= (0x1 << 2);
  }
  break;
 default:
  FUNC_0(1);
 }

 VAR_9 = FUNC_4(VAR_3, VAR_0, VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_7)
  FUNC_2(10);


 VAR_6->i.serror &= ~VAR_2;
 return FUNC_4(VAR_3, VAR_1, VAR_2);
}
