
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,long) ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 (int,char*,long long) ;

void FUNC_3 (const char *VAR_3, long VAR_4) {
  FUNC_2 (4, "rpc_out_cstring (len: %lld)\n", (long long) VAR_4);
  FUNC_0 (VAR_4 >= 0 && VAR_4 < (1 << 24));
  FUNC_0 ((char *) VAR_2 + VAR_4 + 8 < (char *) (VAR_1 + VAR_0));
  char *VAR_5 = (char *) VAR_2;
  if (VAR_4 < 254) {
    *VAR_5++ = VAR_4;
  } else {
    *VAR_2 = (VAR_4 << 8) + 0xfe;
    VAR_5 += 4;
  }
  FUNC_1 (VAR_5, VAR_3, VAR_4);
  VAR_5 += VAR_4;
  while ((long) VAR_5 & 3) {
    *VAR_5++ = 0;
  }
  VAR_2 = (int *) VAR_5;
}
