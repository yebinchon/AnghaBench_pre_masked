
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * device; } ;
struct ata_port {TYPE_1__ link; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,char*,int) ;
 unsigned int FUNC_1 (int *,unsigned int,int *) ;
 int FUNC_2 (struct ata_port*,unsigned long) ;
 int FUNC_3 (struct ata_port*,int ) ;
 scalar_t__ FUNC_4 (struct ata_port*,int ) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_1, unsigned int *VAR_2,
    unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_1->ap;
 unsigned int VAR_5 = 0;
 int VAR_6;
 u8 VAR_7;


 if (FUNC_4(VAR_4, 0))
  VAR_5 |= (1 << 0);


 FUNC_3(VAR_4, 0);


 VAR_6 = FUNC_2(VAR_4, VAR_3);

 if (VAR_6 && VAR_6 != -VAR_0) {
  FUNC_0(VAR_1, "SRST failed (errno=%d)\n", VAR_6);
  return VAR_6;
 }


 VAR_2[0] = FUNC_1(&VAR_4->link.device[0],
       VAR_5 & (1 << 0), &VAR_7);

 return 0;
}
