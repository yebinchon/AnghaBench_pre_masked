
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {struct fwnode_handle const* secondary; } ;


 int FUNC_0 (struct fwnode_handle const*) ;
 int FUNC_1 (struct fwnode_handle const*,int ,char const*) ;
 int VAR_0 ;

bool FUNC_2(const struct fwnode_handle *VAR_1,
        const char *VAR_2)
{
 bool VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3 == 0 && !FUNC_0(VAR_1) &&
     !FUNC_0(VAR_1->secondary))
  VAR_3 = FUNC_1(VAR_1->secondary, VAR_0,
      VAR_2);
 return VAR_3;
}
