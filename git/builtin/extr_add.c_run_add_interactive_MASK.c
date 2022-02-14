
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct argv_array {int argv; } ;
struct TYPE_2__ {char* original; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,char const*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const char *VAR_2, const char *VAR_3,
   const struct pathspec *VAR_4)
{
 int VAR_5, VAR_6;
 struct argv_array VAR_7 = VAR_0;

 FUNC_1(&VAR_7, "add--interactive");
 if (VAR_3)
  FUNC_1(&VAR_7, VAR_3);
 if (VAR_2)
  FUNC_1(&VAR_7, VAR_2);
 FUNC_1(&VAR_7, "--");
 for (VAR_6 = 0; VAR_6 < VAR_4->nr; VAR_6++)

  FUNC_1(&VAR_7, VAR_4->items[VAR_6].original);

 VAR_5 = FUNC_2(VAR_7.argv, VAR_1);
 FUNC_0(&VAR_7);
 return VAR_5;
}
