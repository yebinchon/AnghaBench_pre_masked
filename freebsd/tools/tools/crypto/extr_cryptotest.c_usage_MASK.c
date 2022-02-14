
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(const char* VAR_0)
{
 FUNC_1("usage: %s [-czsbv] [-d dev] [-a algorithm] [count] [size ...]\n",
  VAR_0);
 FUNC_1("where algorithm is one of:\n");
 FUNC_1("    null des 3des (default) blowfish cast skipjack rij\n");
 FUNC_1("    aes aes192 aes256 chacha20 md5 sha1 sha256 sha384 sha512\n");
 FUNC_1("    blake2b blake2s\n");
 FUNC_1(" or an encryption algorithm concatented with authentication\n");
 FUNC_1(" algorithm with '+' in the middle, e.g., aes+sha1.\n");
 FUNC_1("count is the number of encrypt/decrypt ops to do\n");
 FUNC_1("size is the number of bytes of text to encrypt+decrypt\n");
 FUNC_1("\n");
 FUNC_1("-c check the results (slows timing)\n");
 FUNC_1("-d use specific device, specify 'soft' for testing software implementations\n");
 FUNC_1("\tNOTE: to use software you must set:\n\t sysctl kern.cryptodevallowsoft=1\n");
 FUNC_1("-z run all available algorithms on a variety of sizes\n");
 FUNC_1("-v be verbose\n");
 FUNC_1("-b mark operations for batching\n");
 FUNC_1("-p profile kernel crypto operation (must be root)\n");
 FUNC_1("-t n for n threads and run tests concurrently\n");
 FUNC_0(-1);
}
