
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_1,
  unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->ap, VAR_0);


 VAR_3 = FUNC_1(VAR_1, VAR_2);



 if (VAR_3)
  return VAR_3;

 return 0;
}
