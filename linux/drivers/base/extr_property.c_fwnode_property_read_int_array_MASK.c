
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {struct fwnode_handle const* secondary; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwnode_handle const*) ;
 int FUNC_1 (struct fwnode_handle const*,int ,char const*,unsigned int,void*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct fwnode_handle *VAR_2,
       const char *VAR_3,
       unsigned int VAR_4, void *VAR_5,
       size_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_1, VAR_3,
     VAR_4, VAR_5, VAR_6);
 if (VAR_7 == -VAR_0 && !FUNC_0(VAR_2) &&
     !FUNC_0(VAR_2->secondary))
  VAR_7 = FUNC_1(
   VAR_2->secondary, VAR_1, VAR_3,
   VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
