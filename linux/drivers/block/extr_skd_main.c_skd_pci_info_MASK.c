
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct skd_device {int pdev; } ;
typedef int lwstr ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(struct skd_device *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_2, "PCIe (");
 VAR_3 = FUNC_0(VAR_1->pdev, VAR_0);

 if (VAR_3) {

  char VAR_4[6];
  uint16_t VAR_5, VAR_6, VAR_7;

  VAR_3 += 0x12;
  FUNC_1(VAR_1->pdev, VAR_3, &VAR_5);
  VAR_6 = VAR_5 & (0xF);
  VAR_7 = (VAR_5 & 0x3F0) >> 4;

  if (VAR_6 == 1)
   FUNC_3(VAR_2, "2.5GT/s ");
  else if (VAR_6 == 2)
   FUNC_3(VAR_2, "5.0GT/s ");
  else
   FUNC_3(VAR_2, "<unknown> ");
  FUNC_2(VAR_4, sizeof(VAR_4), "%dX)", VAR_7);
  FUNC_3(VAR_2, VAR_4);
 }
 return VAR_2;
}
