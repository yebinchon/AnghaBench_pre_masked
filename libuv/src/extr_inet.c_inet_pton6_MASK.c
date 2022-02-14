
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,char,int) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, unsigned char *VAR_2) {
  static const char VAR_3[] = "0123456789abcdef",
                    VAR_4[] = "0123456789ABCDEF";
  unsigned char VAR_5[sizeof(struct in6_addr)], *VAR_6, *VAR_7, *VAR_8;
  const char *VAR_9, *VAR_10;
  int VAR_11, VAR_12;
  unsigned int VAR_13;

  FUNC_2((VAR_6 = VAR_5), '\0', sizeof VAR_5);
  VAR_7 = VAR_6 + sizeof VAR_5;
  VAR_8 = ((void*)0);

  if (*VAR_1 == ':')
    if (*++VAR_1 != ':')
      return VAR_0;
  VAR_10 = VAR_1;
  VAR_12 = 0;
  VAR_13 = 0;
  while ((VAR_11 = *VAR_1++) != '\0') {
    const char *VAR_14;

    if ((VAR_14 = FUNC_3((VAR_9 = VAR_3), VAR_11)) == ((void*)0))
      VAR_14 = FUNC_3((VAR_9 = VAR_4), VAR_11);
    if (VAR_14 != ((void*)0)) {
      VAR_13 <<= 4;
      VAR_13 |= (VAR_14 - VAR_9);
      if (++VAR_12 > 4)
        return VAR_0;
      continue;
    }
    if (VAR_11 == ':') {
      VAR_10 = VAR_1;
      if (!VAR_12) {
        if (VAR_8)
          return VAR_0;
        VAR_8 = VAR_6;
        continue;
      } else if (*VAR_1 == '\0') {
        return VAR_0;
      }
      if (VAR_6 + sizeof(uint16_t) > VAR_7)
        return VAR_0;
      *VAR_6++ = (unsigned char) (VAR_13 >> 8) & 0xff;
      *VAR_6++ = (unsigned char) VAR_13 & 0xff;
      VAR_12 = 0;
      VAR_13 = 0;
      continue;
    }
    if (VAR_11 == '.' && ((VAR_6 + sizeof(struct in_addr)) <= VAR_7)) {
      int VAR_15 = FUNC_0(VAR_10, VAR_6);
      if (VAR_15 == 0) {
        VAR_6 += sizeof(struct in_addr);
        VAR_12 = 0;
        break;
      }
    }
    return VAR_0;
  }
  if (VAR_12) {
    if (VAR_6 + sizeof(uint16_t) > VAR_7)
      return VAR_0;
    *VAR_6++ = (unsigned char) (VAR_13 >> 8) & 0xff;
    *VAR_6++ = (unsigned char) VAR_13 & 0xff;
  }
  if (VAR_8 != ((void*)0)) {




    const int VAR_16 = VAR_6 - VAR_8;
    int VAR_17;

    if (VAR_6 == VAR_7)
      return VAR_0;
    for (VAR_17 = 1; VAR_17 <= VAR_16; VAR_17++) {
      VAR_7[- VAR_17] = VAR_8[VAR_16 - VAR_17];
      VAR_8[VAR_16 - VAR_17] = 0;
    }
    VAR_6 = VAR_7;
  }
  if (VAR_6 != VAR_7)
    return VAR_0;
  FUNC_1(VAR_2, VAR_5, sizeof VAR_5);
  return 0;
}
