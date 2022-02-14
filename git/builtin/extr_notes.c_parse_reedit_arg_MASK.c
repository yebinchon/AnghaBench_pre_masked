
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct note_data* value; } ;
struct note_data {int use_editor; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct option const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct note_data *VAR_3 = VAR_0->value;
 FUNC_0(VAR_2);
 VAR_3->use_editor = 1;
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
