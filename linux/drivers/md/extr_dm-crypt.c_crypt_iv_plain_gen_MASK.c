
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_crypt_request {int iv_sector; } ;
struct crypt_config {int iv_size; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct crypt_config *VAR_0, u8 *VAR_1,
         struct dm_crypt_request *VAR_2)
{
 FUNC_1(VAR_1, 0, VAR_0->iv_size);
 *(__le32 *)VAR_1 = FUNC_0(VAR_2->iv_sector & 0xffffffff);

 return 0;
}
