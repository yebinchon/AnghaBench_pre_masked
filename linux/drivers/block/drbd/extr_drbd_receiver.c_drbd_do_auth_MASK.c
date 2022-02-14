
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int dummy; } ;


 int FUNC_0 (struct drbd_connection*,char*) ;

__attribute__((used)) static int FUNC_1(struct drbd_connection *VAR_0)
{
 FUNC_0(VAR_0, "This kernel was build without CONFIG_CRYPTO_HMAC.\n");
 FUNC_0(VAR_0, "You need to disable 'cram-hmac-alg' in drbd.conf.\n");
 return -1;
}
