
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;


 int FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct stream_filter *VAR_0,
     const char *VAR_1, size_t *VAR_2,
     char *VAR_3, size_t *VAR_4)
{
 size_t VAR_5;

 if (!VAR_1)
  return 0;
 VAR_5 = *VAR_2;
 if (*VAR_4 < VAR_5)
  VAR_5 = *VAR_4;
 if (VAR_5) {
  FUNC_0(VAR_3, VAR_1, VAR_5);
  *VAR_2 -= VAR_5;
  *VAR_4 -= VAR_5;
 }
 return 0;
}
