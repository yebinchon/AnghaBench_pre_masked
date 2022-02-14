
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fragment {int newlines; int newpos; int oldlines; int oldpos; } ;


 int FUNC_0 (char const*,int,int,char*,int *,int *) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, struct fragment *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || VAR_0[VAR_1-1] != '\n')
  return -1;


 VAR_3 = FUNC_0(VAR_0, VAR_1, 4, " +", &VAR_2->oldpos, &VAR_2->oldlines);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_3, " @@", &VAR_2->newpos, &VAR_2->newlines);

 return VAR_3;
}
