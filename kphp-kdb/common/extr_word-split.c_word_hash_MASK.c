
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,unsigned char*) ;
 int FUNC_1 (char const*) ;

unsigned long long FUNC_2 (const char *VAR_0, int VAR_1) {
  union {
    unsigned char data[16];
    unsigned long long hash;
  } VAR_2;

  if (VAR_1 < 0) {
    VAR_1 = FUNC_1 (VAR_0);
  }

  FUNC_0 ((unsigned char *) VAR_0, VAR_1, VAR_2.data);

  return VAR_2.hash;
}
