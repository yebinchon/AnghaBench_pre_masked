
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {struct block_device* bdev; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int) ;

__attribute__((used)) static void FUNC_1(struct md_rdev *VAR_3)
{
 struct block_device *VAR_4 = VAR_3->bdev;
 VAR_3->bdev = ((void*)0);
 FUNC_0(VAR_4, VAR_1|VAR_2|VAR_0);
}
