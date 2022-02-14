
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_dev; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 struct block_device* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

dev_t FUNC_4(const char *VAR_0)
{
 dev_t VAR_1;
 struct block_device *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_2))
  VAR_1 = FUNC_3(VAR_0);
 else {
  VAR_1 = VAR_2->bd_dev;
  FUNC_1(VAR_2);
 }

 return VAR_1;
}
