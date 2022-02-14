
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*,unsigned char const,unsigned char const,unsigned char const,unsigned char const) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_2, char *VAR_3, size_t VAR_4) {
  static const char VAR_5[] = "%u.%u.%u.%u";
  char VAR_6[VAR_1];
  int VAR_7;

  VAR_7 = FUNC_0(VAR_6, sizeof(VAR_6), VAR_5, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
  if (VAR_7 <= 0 || (size_t) VAR_7 >= VAR_4) {
    return VAR_0;
  }
  FUNC_1(VAR_3, VAR_6, VAR_4);
  return 0;
}
