
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_data {int buffered_comment; } ;
typedef int git_config_parser ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(git_config_parser *VAR_0, const char *VAR_1, size_t VAR_2, void *VAR_3)
{
 struct write_data *VAR_4;

 FUNC_0(VAR_0);

 VAR_4 = (struct write_data *)VAR_3;
 return FUNC_1(&VAR_4->buffered_comment, VAR_1, VAR_2);
}
