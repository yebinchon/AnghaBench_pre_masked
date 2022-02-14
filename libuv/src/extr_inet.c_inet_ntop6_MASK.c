
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char const*,char*,int) ;
 int FUNC_2 (unsigned int*,char,int) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_6(const unsigned char *VAR_3, char *VAR_4, size_t VAR_5) {







  char VAR_6[VAR_2], *VAR_7;
  struct { int base, len; } VAR_8, VAR_9;
  unsigned int VAR_10[sizeof(struct in6_addr) / sizeof(uint16_t)];
  int VAR_11;






  FUNC_2(VAR_10, '\0', sizeof VAR_10);
  for (VAR_11 = 0; VAR_11 < (int) sizeof(struct in6_addr); VAR_11++)
    VAR_10[VAR_11 / 2] |= (VAR_3[VAR_11] << ((1 - (VAR_11 % 2)) << 3));
  VAR_8.base = -1;
  VAR_8.len = 0;
  VAR_9.base = -1;
  VAR_9.len = 0;
  for (VAR_11 = 0; VAR_11 < (int) FUNC_0(VAR_10); VAR_11++) {
    if (VAR_10[VAR_11] == 0) {
      if (VAR_9.base == -1)
        VAR_9.base = VAR_11, VAR_9.len = 1;
      else
        VAR_9.len++;
    } else {
      if (VAR_9.base != -1) {
        if (VAR_8.base == -1 || VAR_9.len > VAR_8.len)
          VAR_8 = VAR_9;
        VAR_9.base = -1;
      }
    }
  }
  if (VAR_9.base != -1) {
    if (VAR_8.base == -1 || VAR_9.len > VAR_8.len)
      VAR_8 = VAR_9;
  }
  if (VAR_8.base != -1 && VAR_8.len < 2)
    VAR_8.base = -1;




  VAR_7 = VAR_6;
  for (VAR_11 = 0; VAR_11 < (int) FUNC_0(VAR_10); VAR_11++) {

    if (VAR_8.base != -1 && VAR_11 >= VAR_8.base &&
        VAR_11 < (VAR_8.base + VAR_8.len)) {
      if (VAR_11 == VAR_8.base)
        *VAR_7++ = ':';
      continue;
    }

    if (VAR_11 != 0)
      *VAR_7++ = ':';

    if (VAR_11 == 6 && VAR_8.base == 0 && (VAR_8.len == 6 ||
        (VAR_8.len == 7 && VAR_10[7] != 0x0001) ||
        (VAR_8.len == 5 && VAR_10[5] == 0xffff))) {
      int VAR_12 = FUNC_1(VAR_3+12, VAR_7, sizeof VAR_6 - (VAR_7 - VAR_6));
      if (VAR_12)
        return VAR_12;
      VAR_7 += FUNC_4(VAR_7);
      break;
    }
    VAR_7 += FUNC_3(VAR_7, "%x", VAR_10[VAR_11]);
  }

  if (VAR_8.base != -1 && (VAR_8.base + VAR_8.len) == FUNC_0(VAR_10))
    *VAR_7++ = ':';
  *VAR_7++ = '\0';
  if (VAR_0 == FUNC_5(VAR_4, VAR_6, VAR_5))
    return VAR_1;
  return 0;
}
