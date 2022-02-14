
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_master {int dummy; } ;
typedef int cmd ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fsi_master*,int,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct fsi_master *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 __be32 VAR_3;

 VAR_2 = 0x4;
 VAR_3 = FUNC_0(0xc0de0000);

 return FUNC_1(VAR_0, VAR_1, 0, VAR_2, &VAR_3, sizeof(VAR_3));
}
