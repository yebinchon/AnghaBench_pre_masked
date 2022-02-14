
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,char*,char*) ;
 int * VAR_1 ;

int FUNC_3()
{
 int VAR_2 = 0;




 for (size_t VAR_3 = 0; VAR_2 == 0 && VAR_3 < VAR_0; VAR_3++)
 {
  VAR_2 = FUNC_0(VAR_1[VAR_3]);
 }


 if (VAR_2 == 0)
 {
  FUNC_1("\nStarting the RSA test with OpenSSL\n");
  VAR_2 = FUNC_2(1, 1, "key.pem", "cert.pem");
 }

 if (VAR_2 == 0)
 {
  FUNC_1("\nStarting the P256R1 test with OpenSSL\n");
  VAR_2 = FUNC_2(1, 1, "ec_key.pem", "ec_cert.pem");
 }

 if (VAR_2 == 0)
 {
  FUNC_1("\nStarting the P256R1 test with OpenSSL server and Minicrypto client\n");
  VAR_2 = FUNC_2(0, 1, "ec_key.pem", "ec_cert.pem");
 }

 if (VAR_2 == 0)
 {
  FUNC_1("\nStarting the P256R1 test with Minicrypto\n");
  VAR_2 = FUNC_2(0, 0, "ec_key.pem", "ec_cert.pem");
 }

 if (VAR_2 == 0)
 {
  FUNC_1("\nStarting the P256R1 test with Minicrypto server and OpenSSL client\n");
  VAR_2 = FUNC_2(1, 0, "ec_key.pem", "ec_cert.pem");
 }

    return VAR_2;
}
