
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;


 int FUNC_0 (struct remote*,char const*) ;
 struct branch* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 struct remote* FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct remote*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct remote*) ;
 int FUNC_6 (struct remote*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static struct remote *FUNC_8(const char *VAR_1,
       const char *(*VAR_2)(struct branch *, int *))
{
 struct remote *VAR_3;
 int VAR_4 = 0;

 FUNC_4();

 if (VAR_1)
  VAR_4 = 1;
 else
  VAR_1 = VAR_2(VAR_0, &VAR_4);

 VAR_3 = FUNC_2(VAR_1, 0);
 if (FUNC_7(VAR_1) && FUNC_1()) {
  if (!FUNC_6(VAR_3))
   FUNC_5(VAR_3);
  if (!FUNC_6(VAR_3))
   FUNC_3(VAR_3);
 }
 if (VAR_4 && !FUNC_6(VAR_3))
  FUNC_0(VAR_3, VAR_1);
 if (!FUNC_6(VAR_3))
  return ((void*)0);
 return VAR_3;
}
