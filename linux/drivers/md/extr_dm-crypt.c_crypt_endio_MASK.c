
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crypt_io {scalar_t__ error; struct crypt_config* cc; } ;
struct crypt_config {int dummy; } ;
struct bio {scalar_t__ bi_status; struct dm_crypt_io* bi_private; } ;
typedef scalar_t__ blk_status_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct dm_crypt_io*) ;
 int FUNC_3 (struct crypt_config*,struct bio*) ;
 int FUNC_4 (struct dm_crypt_io*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2)
{
 struct dm_crypt_io *VAR_3 = VAR_2->bi_private;
 struct crypt_config *VAR_4 = VAR_3->cc;
 unsigned VAR_5 = FUNC_0(VAR_2);
 blk_status_t VAR_6;




 if (VAR_5 == VAR_1)
  FUNC_3(VAR_4, VAR_2);

 VAR_6 = VAR_2->bi_status;
 FUNC_1(VAR_2);

 if (VAR_5 == VAR_0 && !VAR_6) {
  FUNC_4(VAR_3);
  return;
 }

 if (FUNC_5(VAR_6))
  VAR_3->error = VAR_6;

 FUNC_2(VAR_3);
}
