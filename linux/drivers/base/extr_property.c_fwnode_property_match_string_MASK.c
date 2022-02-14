
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fwnode_handle const*,char const*,char const**,int) ;
 char** FUNC_1 (int,int,int ) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char const**,int,char const*) ;

int FUNC_4(const struct fwnode_handle *VAR_3,
 const char *VAR_4, const char *VAR_5)
{
 const char **VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 == 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_5);
 if (VAR_8 < 0)
  VAR_8 = -VAR_0;
out:
 FUNC_2(VAR_6);
 return VAR_8;
}
