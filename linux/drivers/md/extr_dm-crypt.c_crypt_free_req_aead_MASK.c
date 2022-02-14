
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crypt_io {int dummy; } ;
struct crypt_config {int req_pool; int per_bio_data_size; } ;
struct bio {int dummy; } ;
struct aead_request {int dummy; } ;


 struct dm_crypt_io* FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct aead_request*,int *) ;

__attribute__((used)) static void FUNC_2(struct crypt_config *VAR_0,
    struct aead_request *VAR_1, struct bio *VAR_2)
{
 struct dm_crypt_io *VAR_3 = FUNC_0(VAR_2, VAR_0->per_bio_data_size);

 if ((struct aead_request *)(VAR_3 + 1) != VAR_1)
  FUNC_1(VAR_1, &VAR_0->req_pool);
}
