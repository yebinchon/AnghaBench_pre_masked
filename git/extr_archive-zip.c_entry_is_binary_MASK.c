
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int binary; } ;
struct index_state {int dummy; } ;


 int FUNC_0 (void const*,size_t) ;
 struct userdiff_driver* FUNC_1 (char*) ;
 struct userdiff_driver* FUNC_2 (struct index_state*,char const*) ;

__attribute__((used)) static int FUNC_3(struct index_state *VAR_0, const char *VAR_1,
      const void *VAR_2, size_t VAR_3)
{
 struct userdiff_driver *VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
  VAR_4 = FUNC_1("default");
 if (VAR_4->binary != -1)
  return VAR_4->binary;
 return FUNC_0(VAR_2, VAR_3);
}
