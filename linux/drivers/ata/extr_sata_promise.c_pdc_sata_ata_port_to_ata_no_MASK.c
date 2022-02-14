
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int flags; struct ata_host* host; } ;
struct ata_host {struct ata_port const** ports; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (struct ata_port const*) ;

__attribute__((used)) static unsigned int FUNC_4(const struct ata_port *VAR_0)
{
 const struct ata_host *VAR_1 = VAR_0->host;
 unsigned int VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2 && VAR_1->ports[VAR_3] != VAR_0; ++VAR_3)
  ;
 FUNC_0(VAR_3 >= VAR_2);
 return FUNC_2(VAR_3, FUNC_1(VAR_0->flags));
}
