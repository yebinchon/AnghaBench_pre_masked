
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int filename; } ;


 int FUNC_0 (struct tempfile*) ;
 struct tempfile* FUNC_1 () ;
 int FUNC_2 (int *,char const*) ;

struct tempfile *FUNC_3(const char *VAR_0)
{
 struct tempfile *VAR_1 = FUNC_1();
 FUNC_2(&VAR_1->filename, VAR_0);
 FUNC_0(VAR_1);
 return VAR_1;
}
