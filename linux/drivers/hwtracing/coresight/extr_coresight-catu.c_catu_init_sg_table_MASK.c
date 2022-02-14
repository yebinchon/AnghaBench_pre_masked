
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_sg_table {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct tmc_sg_table*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tmc_sg_table*) ;
 int FUNC_3 (struct tmc_sg_table*) ;
 int FUNC_4 (struct device*,char*,struct tmc_sg_table*,unsigned long,int) ;
 struct tmc_sg_table* FUNC_5 (struct device*,int,int,int,void**) ;

__attribute__((used)) static struct tmc_sg_table *
FUNC_6(struct device *VAR_3, int VAR_4,
     ssize_t VAR_5, void **VAR_6)
{
 int VAR_7;
 struct tmc_sg_table *VAR_8;





 VAR_7 = FUNC_0(VAR_5, VAR_2) / VAR_0;
 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_7,
     VAR_5 >> VAR_1, VAR_6);
 if (FUNC_1(VAR_8))
  return VAR_8;

 FUNC_3(VAR_8);
 FUNC_4(VAR_3,
  "Setup table %p, size %ldKB, %d table pages\n",
  VAR_8, (unsigned long)VAR_5 >> 10, VAR_7);
 FUNC_2(VAR_8);
 return VAR_8;
}
