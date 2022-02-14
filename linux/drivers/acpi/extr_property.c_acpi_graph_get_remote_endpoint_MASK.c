
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_reference_args {int nargs; unsigned int* args; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
typedef int args ;


 struct fwnode_handle* FUNC_0 (struct fwnode_handle*,char*,unsigned int) ;
 int FUNC_1 (struct fwnode_handle const*,char*,int ,struct fwnode_reference_args*) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_reference_args*,int ,int) ;

__attribute__((used)) static struct fwnode_handle *
FUNC_4(const struct fwnode_handle *VAR_0)
{
 struct fwnode_handle *VAR_1;
 unsigned int VAR_2, VAR_3;
 struct fwnode_reference_args VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_5 = FUNC_1(VAR_0, "remote-endpoint", 0,
            &VAR_4);
 if (VAR_5)
  return ((void*)0);


 if (!FUNC_2(VAR_4.fwnode))
  return VAR_4.nargs ? ((void*)0) : VAR_4.fwnode;





 if (VAR_4.nargs != 2)
  return ((void*)0);

 VAR_1 = VAR_4.fwnode;
 VAR_2 = VAR_4.args[0];
 VAR_3 = VAR_4.args[1];

 VAR_1 = FUNC_0(VAR_1, "port", VAR_2);

 return FUNC_0(VAR_1, "endpoint", VAR_3);
}
