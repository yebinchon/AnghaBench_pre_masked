
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {size_t x_len; } ;
typedef size_t off_t ;
typedef size_t intmax_t ;


 int FUNC_0 (int,char*,char const*,size_t,...) ;

void
FUNC_1(const struct executable *VAR_0, off_t VAR_1, size_t VAR_2,
    const char *VAR_3)
{

 if (VAR_1 < 0) {
  FUNC_0(1, "%s starts at negative offset %jd",
      VAR_3, (intmax_t)VAR_1);
 }
 if (VAR_1 >= (off_t)VAR_0->x_len) {
  FUNC_0(1, "%s starts at %jd, past the end of executable at %zd",
      VAR_3, (intmax_t)VAR_1, VAR_0->x_len);
 }
 if (VAR_2 >= VAR_0->x_len) {
  FUNC_0(1, "%s size %zd is larger than the executable size %zd",
      VAR_3, VAR_2, VAR_0->x_len);
 }
 if (VAR_1 + VAR_2 > VAR_0->x_len) {
  FUNC_0(1, "%s extends to %jd, past the end of executable at %zd",
      VAR_3, (intmax_t)(VAR_1 + VAR_2), VAR_0->x_len);
 }
}
