
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_device {int link; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ata_device*,char*,int,unsigned int) ;
 unsigned int FUNC_2 (int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_1, u32 *VAR_2)
{
 static const int VAR_3[] = { 0, 1, 2, 32, 33, 64, 96 };
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  int VAR_5 = VAR_3[VAR_4];
  unsigned int VAR_6;

  VAR_6 = FUNC_2(VAR_1->link, VAR_5, &VAR_2[VAR_5]);
  if (VAR_6) {
   FUNC_1(VAR_1, "failed to read PMP GSCR[%d] (Emask=0x%x)\n",
        VAR_5, VAR_6);
   return -VAR_0;
  }
 }

 return 0;
}
