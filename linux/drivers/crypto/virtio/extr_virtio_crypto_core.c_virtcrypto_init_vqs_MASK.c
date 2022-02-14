
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct virtio_crypto*) ;
 int FUNC_3 (struct virtio_crypto*) ;
 int FUNC_4 (struct virtio_crypto*) ;
 int FUNC_5 (struct virtio_crypto*) ;

__attribute__((used)) static int FUNC_6(struct virtio_crypto *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto err;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto err_free;

 FUNC_0();
 FUNC_5(VAR_0);
 FUNC_1();

 return 0;

err_free:
 FUNC_4(VAR_0);
err:
 return VAR_1;
}
