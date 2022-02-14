
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_set {int* nr_map; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_nand_set *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 VAR_4 = VAR_3->nr_map[VAR_4] & 3;

 FUNC_2("bast_nand: selecting slot %d (set %p,%p)\n",
   VAR_4, VAR_3, VAR_3->nr_map);

 VAR_5 = FUNC_0(VAR_2);
 VAR_5 &= VAR_0;
 VAR_5 |= VAR_4;
 VAR_5 |= VAR_1;

 FUNC_2("bast_nand: ctrl2 now %02x\n", VAR_5);

 FUNC_1(VAR_5, VAR_2);
}
