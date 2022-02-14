
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef struct git_attr {int attr_nr; int name; } const git_attr ;
struct TYPE_6__ {int map; } ;


 int FUNC_0 (struct git_attr const*,char const*,char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int,struct git_attr const*) ;
 struct git_attr const* FUNC_3 (TYPE_1__*,char const*,int) ;
 int FUNC_4 (char const*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static const struct git_attr *FUNC_8(const char *VAR_1, int VAR_2)
{
 struct git_attr *VAR_3;

 if (!FUNC_4(VAR_1, VAR_2))
  return ((void*)0);

 FUNC_6(&VAR_0);

 VAR_3 = FUNC_3(&VAR_0, VAR_1, VAR_2);

 if (!VAR_3) {
  FUNC_0(VAR_3, VAR_1, VAR_1, VAR_2);
  VAR_3->attr_nr = FUNC_5(&VAR_0.map);

  FUNC_2(&VAR_0, VAR_3->name, VAR_2, VAR_3);
  FUNC_1(VAR_3->attr_nr ==
         (FUNC_5(&VAR_0.map) - 1));
 }

 FUNC_7(&VAR_0);

 return VAR_3;
}
