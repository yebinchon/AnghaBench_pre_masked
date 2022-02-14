
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crypt_io {int work; struct crypt_config* cc; } ;
struct crypt_config {int crypt_queue; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_crypt_io *VAR_1)
{
 struct crypt_config *VAR_2 = VAR_1->cc;

 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_1(VAR_2->crypt_queue, &VAR_1->work);
}
