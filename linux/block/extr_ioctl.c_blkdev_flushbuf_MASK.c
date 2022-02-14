
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,int ,unsigned int,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_2, fmode_t VAR_3,
  unsigned VAR_4, unsigned long VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!FUNC_4(VAR_6))
  return VAR_6;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 return 0;
}
