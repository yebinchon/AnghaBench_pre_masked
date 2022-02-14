
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsck_options*,struct object*,int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const void *VAR_2, unsigned long VAR_3,
     struct object *VAR_4, struct fsck_options *VAR_5)
{
 const char *VAR_6 = (const char *)VAR_2;
 unsigned long VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  switch (VAR_6[VAR_7]) {
  case '\0':
   return FUNC_0(VAR_5, VAR_4,
    VAR_0,
    "unterminated header: NUL at offset %ld", VAR_7);
  case '\n':
   if (VAR_7 + 1 < VAR_3 && VAR_6[VAR_7 + 1] == '\n')
    return 0;
  }
 }







 if (VAR_3 && VAR_6[VAR_3 - 1] == '\n')
  return 0;

 return FUNC_0(VAR_5, VAR_4,
  VAR_1, "unterminated header");
}
