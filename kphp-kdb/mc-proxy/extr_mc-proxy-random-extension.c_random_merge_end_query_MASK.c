
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct random_gather_extra {int bytes; int limit; scalar_t__ hex; } ;
struct gather_entry {int res_bytes; int* data; } ;
struct connection {int dummy; } ;
typedef int EVP_CIPHER_CTX ;


 int* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int *,int ,int *,char*,char*) ;
 int FUNC_4 (int *,int*,int*,char*,int) ;
 int FUNC_5 () ;
 char* VAR_1 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct connection*,char const*,char*,int) ;
 int FUNC_8 (int,char*) ;

int FUNC_9 (struct connection *VAR_2, const char *VAR_3, int VAR_4, void *VAR_5, struct gather_entry *VAR_6, int VAR_7) {
  struct random_gather_extra *VAR_8 = VAR_5;
  int VAR_9, VAR_10, VAR_11 = 0;
  for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++) {
    if (VAR_6[VAR_11].res_bytes < VAR_6[VAR_9].res_bytes) {
      VAR_11 = VAR_9;
    }
  }
  int VAR_12 = VAR_6[VAR_11].res_bytes, *VAR_13, *VAR_14;
  if (VAR_12 <= 64) {
    return 0;
  }
  FUNC_6 (VAR_1, 0, (VAR_12 + 3) & -4);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    VAR_13 = VAR_6[VAR_9].data;
    VAR_14 = (int *) VAR_1;
    for (VAR_10 = 0; VAR_10 < VAR_6[VAR_9].res_bytes; VAR_10 += 4) {
      *VAR_14++ ^= *VAR_13++;
    }
  }

  EVP_CIPHER_CTX VAR_15;
  FUNC_1 (&VAR_15);
  FUNC_3 (&VAR_15, FUNC_5(), ((void*)0), VAR_1, VAR_1 + 32);
  int VAR_16, VAR_17;

  if (!FUNC_4 (&VAR_15, VAR_0, &VAR_16, VAR_1 + 64, VAR_12 - 64)) {
    FUNC_8 (1, "EVP_EncryptUpdate fail.\n");
    FUNC_0 (&VAR_15);
    return 0;
  }

  if (!FUNC_2 (&VAR_15, VAR_0 + VAR_16, &VAR_17)) {
    FUNC_8 (1, "EVP_EncryptFinal_ex fail.\n");
    FUNC_0 (&VAR_15);
    return 0;
  }
  FUNC_0 (&VAR_15);
  VAR_17 += VAR_16;

  int VAR_18 = VAR_17 < VAR_6[0].res_bytes ? VAR_17 : VAR_6[0].res_bytes;
  if (VAR_18 > VAR_8->bytes) {
    VAR_18 = VAR_8->bytes;
  }

  VAR_14 = (int *) VAR_0;
  VAR_13 = VAR_6[0].data;
  for (VAR_9 = 0; VAR_9 < VAR_18; VAR_9 += 4) {
    *VAR_14++ ^= *VAR_13++;
  }

  if (VAR_8->hex) {
    static const char VAR_19[16] = "0123456789abcdef";
    for (VAR_9 = 0; VAR_9 < VAR_18; VAR_9++) {
      VAR_1[2*VAR_9] = VAR_19[(VAR_0[VAR_9] >> 4) & 15];
      VAR_1[2*VAR_9+1] = VAR_19[VAR_0[VAR_9] & 15];
    }
    VAR_18 *= 2;
    if (VAR_18 > VAR_8->limit) {
      VAR_18 = VAR_8->limit;
    }
    return FUNC_7 (VAR_2, VAR_3, (char *) VAR_1, VAR_18);
  }
  return FUNC_7 (VAR_2, VAR_3, (char *) VAR_0, VAR_18);
}
