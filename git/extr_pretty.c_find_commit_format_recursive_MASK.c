
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmt_fmt_map {char* user_format; scalar_t__ is_alias; int name; } ;


 struct cmt_fmt_map* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static struct cmt_fmt_map *FUNC_3(const char *VAR_2,
       const char *VAR_3,
       int VAR_4)
{
 struct cmt_fmt_map *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 int VAR_7;

 if (VAR_4 >= VAR_1)
  FUNC_0("invalid --pretty format: "
      "'%s' references an alias which points to itself",
      VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  size_t VAR_8;

  if (!FUNC_1(VAR_0[VAR_7].name, VAR_2))
   continue;

  VAR_8 = FUNC_2(VAR_0[VAR_7].name);
  if (VAR_5 == ((void*)0) || VAR_6 > VAR_8) {
   VAR_5 = &VAR_0[VAR_7];
   VAR_6 = VAR_8;
  }
 }

 if (VAR_5 && VAR_5->is_alias) {
  VAR_5 = FUNC_3(VAR_5->user_format,
           VAR_3,
           VAR_4+1);
 }

 return VAR_5;
}
