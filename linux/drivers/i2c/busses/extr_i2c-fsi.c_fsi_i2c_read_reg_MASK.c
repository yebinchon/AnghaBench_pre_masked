
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_device {int dummy; } ;
typedef int data_be ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsi_device*,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct fsi_device *VAR_0, unsigned int VAR_1,
       u32 *VAR_2)
{
 int VAR_3;
 __be32 VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_3)
  return VAR_3;

 *VAR_2 = FUNC_0(VAR_4);

 return 0;
}
