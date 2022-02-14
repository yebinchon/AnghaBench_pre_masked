
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_port {int dummy; } ;
struct ata_link {int * device; struct ata_port* ap; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct ata_link*,char*,int) ;
 unsigned int FUNC_2 (int *,unsigned int,int *) ;
 scalar_t__ FUNC_3 (struct ata_port*,int ) ;
 int FUNC_4 (struct ata_port*,unsigned long) ;
 scalar_t__ FUNC_5 (struct ata_link*) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_1, unsigned int *VAR_2,
          unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_1->ap;
 unsigned int VAR_5 = 0;
 int VAR_6;
 u8 VAR_7;


 if (FUNC_3(VAR_4, 0))
  VAR_5 |= 1 << 0;


 FUNC_0("about to softreset, devmask=%x\n", VAR_5);
 VAR_6 = FUNC_4(VAR_4, VAR_3);

 if (VAR_6 && (VAR_6 != -VAR_0 || FUNC_5(VAR_1))) {
  FUNC_1(VAR_1, "SRST failed (errno=%d)\n", VAR_6);
  return VAR_6;
 }


 VAR_2[0] = FUNC_2(&VAR_1->device[0], VAR_5, &VAR_7);

 FUNC_0("classes[0]=%u\n", VAR_2[0]);
 return 0;
}
