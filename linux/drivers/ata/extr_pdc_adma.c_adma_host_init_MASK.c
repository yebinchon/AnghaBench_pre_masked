
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_host {int * ports; scalar_t__* iomap; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ata_host *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;


 FUNC_1(7, VAR_3->iomap[VAR_0] + VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  FUNC_0(VAR_3->ports[VAR_5]);
}
