
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,char const*,unsigned int) ;

unsigned FUNC_1(const char** VAR_0, const char* VAR_1) {
  unsigned VAR_2;

  VAR_2 = (unsigned char) *(*VAR_0)++;

  if (VAR_2 < 128)
    return VAR_2;

  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
