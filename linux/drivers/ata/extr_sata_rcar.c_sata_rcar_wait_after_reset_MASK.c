
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_1,
          unsigned long VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->ap;

 FUNC_0(VAR_3, VAR_0);

 return FUNC_1(VAR_1, VAR_2);
}
