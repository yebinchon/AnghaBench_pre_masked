
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union md_node_info {int dummy; } md_node_info ;
typedef int u64 ;
struct mdesc_handle {int dummy; } ;
typedef int (* mdesc_node_info_get_f ) (struct mdesc_handle*,int ,union md_node_info*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int (*) (struct mdesc_handle*,int ,union md_node_info*),int *,int *) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(struct mdesc_handle *VAR_2, u64 VAR_3,
   const char *VAR_4, union md_node_info *VAR_5)
{
 mdesc_node_info_get_f VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == VAR_1 ||
     VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_0;


 FUNC_0(VAR_4, VAR_6, ((void*)0), ((void*)0));


 if (VAR_6 == ((void*)0)) {
  FUNC_1("MD: %s node is not supported\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = VAR_6(VAR_2, VAR_3, VAR_5);
 if (VAR_7 != 0) {
  FUNC_1("MD: Cannot find 1 or more required match properties for %s node.\n",
         VAR_4);
  return -1;
 }

 return 0;
}
