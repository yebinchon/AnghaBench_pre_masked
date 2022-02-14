
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int dummy; } ;
struct patch {int dummy; } ;
struct cache_entry {int dummy; } ;
struct apply_state {scalar_t__ check_index; scalar_t__ cached; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct cache_entry const*,struct strbuf*) ;
 scalar_t__ FUNC_5 (struct stat*,struct patch*,char const*,struct strbuf*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct apply_state *VAR_1,
        struct strbuf *VAR_2,
        const struct cache_entry *VAR_3,
        struct stat *VAR_4,
        struct patch *VAR_5,
        const char *VAR_6,
        unsigned VAR_7)
{
 if (VAR_1->cached || VAR_1->check_index) {
  if (FUNC_4(VAR_3, VAR_2))
   return FUNC_2(FUNC_1("failed to read %s"), VAR_6);
 } else if (VAR_6) {
  if (FUNC_0(VAR_7)) {
   if (VAR_3)
    return FUNC_4(VAR_3, VAR_2);
   else
    return VAR_0;
  } else if (FUNC_3(VAR_6, FUNC_6(VAR_6))) {
   return FUNC_2(FUNC_1("reading from '%s' beyond a symbolic link"), VAR_6);
  } else {
   if (FUNC_5(VAR_4, VAR_5, VAR_6, VAR_2))
    return FUNC_2(FUNC_1("failed to read %s"), VAR_6);
  }
 }
 return 0;
}
