
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct piix_map_db {int** map; size_t mask; } ;
struct pci_dev {int dev; } ;
struct ata_port_info {int flags; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,char*) ;
 size_t VAR_2 ;
 int FUNC_3 (struct pci_dev*,int ,size_t*) ;
 struct ata_port_info* VAR_3 ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static const int *FUNC_5(struct pci_dev *VAR_4,
         struct ata_port_info *VAR_5,
         const struct piix_map_db *VAR_6)
{
 const int *VAR_7;
 int VAR_8, VAR_9 = 0;
 u8 VAR_10;
 char VAR_11[32];
 char *VAR_12 = VAR_11, *VAR_13 = VAR_11 + sizeof(VAR_11);

 FUNC_3(VAR_4, VAR_1, &VAR_10);

 VAR_7 = VAR_6->map[VAR_10 & VAR_6->mask];

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  switch (VAR_7[VAR_8]) {
  case 128:
   VAR_9 = 1;
   VAR_12 += FUNC_4(VAR_12, VAR_13 - VAR_12, " XX");
   break;

  case 129:
   VAR_12 += FUNC_4(VAR_12, VAR_13 - VAR_12, " --");
   break;

  case 130:
   FUNC_0((VAR_8 & 1) || VAR_7[VAR_8 + 1] != 130);
   VAR_5[VAR_8 / 2] = VAR_3[VAR_2];
   VAR_8++;
   VAR_12 += FUNC_4(VAR_12, VAR_13 - VAR_12, " IDE IDE");
   break;

  default:
   VAR_12 += FUNC_4(VAR_12, VAR_13 - VAR_12, " P%d", VAR_7[VAR_8]);
   if (VAR_8 & 1)
    VAR_5[VAR_8 / 2].flags |= VAR_0;
   break;
  }
 }
 FUNC_2(&VAR_4->dev, "MAP [%s ]\n", VAR_11);

 if (VAR_9)
  FUNC_1(&VAR_4->dev, "invalid MAP value %u\n", VAR_10);

 return VAR_7;
}
