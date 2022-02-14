
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int modtime; int actime; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,struct utimbuf*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 struct utimbuf VAR_1;
 VAR_1.actime = VAR_1.modtime = FUNC_0(((void*)0));
 return !FUNC_1(VAR_0, &VAR_1);
}
