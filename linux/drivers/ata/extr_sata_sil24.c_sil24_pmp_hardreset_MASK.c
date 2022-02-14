
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int ap; } ;


 int FUNC_0 (struct ata_link*,char*) ;
 int FUNC_1 (struct ata_link*,unsigned int*,unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_0, unsigned int *VAR_1,
          unsigned long VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->ap);
 if (VAR_3) {
  FUNC_0(VAR_0, "hardreset failed (port not ready)\n");
  return VAR_3;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
