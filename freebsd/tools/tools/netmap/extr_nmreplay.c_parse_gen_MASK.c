
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _sm {double m; int s; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,char) ;
 double FUNC_3 (char const*,char**) ;

__attribute__((used)) static double
FUNC_4(const char *VAR_0, const struct _sm *VAR_1, int *VAR_2)
{
 double VAR_3;
 char *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  VAR_2 = &VAR_5;
 *VAR_2 = 0;
 if (VAR_0 == ((void*)0))
  goto error;
 VAR_3 = FUNC_3(VAR_0, &VAR_4);
 if (VAR_4 == VAR_0) {
  FUNC_0("bad argument %s", VAR_0);
  goto error;
 }

 if (VAR_1 == ((void*)0) && *VAR_4 == '\0')
  goto done;
 FUNC_1("checking %s [%s]", VAR_0, VAR_4);
 for (;VAR_1->s; VAR_1++) {
  if (FUNC_2(VAR_1->s, *VAR_4))
   goto done;
 }
error:
 *VAR_2 = 1;
 return 0;

done:
 if (VAR_1) {
  FUNC_1("scale is %s %lf", VAR_1->s, VAR_1->m);
  VAR_3 *= VAR_1->m;
 }
 FUNC_1("returning %lf", VAR_3);
 return VAR_3;
}
