
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_set {int* nr_map; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_nand_set *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 VAR_3 = VAR_2->nr_map[VAR_3] & 3;

 FUNC_2("osiris_nand: selecting slot %d (set %p,%p)\n",
   VAR_3, VAR_2, VAR_2->nr_map);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3;

 FUNC_2("osiris_nand: ctrl0 now %02x\n", VAR_4);

 FUNC_1(VAR_4, VAR_1);
}
