
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, const struct cache_entry *VAR_4, int VAR_5)
{
 int VAR_6 = (VAR_4->ce_mode & VAR_0) != VAR_1;
 if (VAR_5) {
  FUNC_2(VAR_3, VAR_2, "%s",
     VAR_6 ? ".merge_link_XXXXXX" : ".merge_file_XXXXXX");
  return FUNC_1(VAR_3);
 } else {
  return FUNC_0(VAR_3, !VAR_6 ? VAR_4->ce_mode : 0666);
 }
}
