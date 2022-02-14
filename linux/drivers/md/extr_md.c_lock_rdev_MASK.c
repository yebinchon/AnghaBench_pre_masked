
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int ,char*) ;
 struct block_device* FUNC_3 (int ,int,struct md_rdev*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct md_rdev *VAR_4, dev_t VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct block_device *VAR_8;
 char VAR_9[VAR_0];

 VAR_8 = FUNC_3(VAR_5, VAR_2|VAR_3|VAR_1,
     VAR_6 ? (struct md_rdev *)FUNC_5 : VAR_4);
 if (FUNC_0(VAR_8)) {
  FUNC_4("md: could not open %s.\n", FUNC_2(VAR_5, VAR_9));
  return FUNC_1(VAR_8);
 }
 VAR_4->bdev = VAR_8;
 return VAR_7;
}
