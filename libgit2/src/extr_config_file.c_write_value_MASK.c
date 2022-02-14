
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_data {int * value; int preg; int orig_name; int buf; } ;


 int FUNC_0 (int ,char*,int ,char const*,int *,char const*) ;
 char* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct write_data *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0->value);
 VAR_2 = FUNC_0(VAR_0->buf,
  "\t%s = %s%s%s\n", VAR_0->orig_name, VAR_1, VAR_0->value, VAR_1);





 if (!VAR_0->preg)
  VAR_0->value = ((void*)0);

 return VAR_2;
}
