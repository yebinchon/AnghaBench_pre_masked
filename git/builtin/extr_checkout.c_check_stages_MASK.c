
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {char* name; } ;


 int FUNC_0 (char*) ;
 struct cache_entry** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cache_entry const*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_2, const struct cache_entry *VAR_3, int VAR_4)
{
 unsigned VAR_5 = 0;
 const char *VAR_6 = VAR_3->name;

 while (VAR_4 < VAR_1) {
  VAR_3 = VAR_0[VAR_4];
  if (FUNC_3(VAR_6, VAR_3->name))
   break;
  VAR_5 |= (1 << FUNC_1(VAR_3));
  VAR_4++;
 }
 if ((VAR_2 & VAR_5) != VAR_2)
  return FUNC_2(FUNC_0("path '%s' does not have all necessary versions"),
        VAR_6);
 return 0;
}
