
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clar_summary {char const* filename; int * fp; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 struct clar_summary* FUNC_2 (int) ;

struct clar_summary *FUNC_3(const char *VAR_0)
{
 struct clar_summary *VAR_1;
 FILE *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, "w")) == ((void*)0))
  return ((void*)0);

 if ((VAR_1 = FUNC_2(sizeof(struct clar_summary))) == ((void*)0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_1->filename = VAR_0;
 VAR_1->fp = VAR_2;

 return VAR_1;
}
