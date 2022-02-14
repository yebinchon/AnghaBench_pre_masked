
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sockaddr_storage {int dummy; } ;
struct se_node_acl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*,int *,struct sockaddr_storage*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(struct se_node_acl *VAR_2, const char *VAR_3)
{
 struct sockaddr_storage VAR_4;
 u64 VAR_5;
 u8 VAR_6[16];
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5, VAR_3);
 if (VAR_7 < 0)
  VAR_7 = FUNC_3(VAR_6, VAR_3);
 if (VAR_7 < 0)
  VAR_7 = FUNC_0(&VAR_1, VAR_0, VAR_3, ((void*)0),
        &VAR_4);
 if (VAR_7 < 0)
  FUNC_1("invalid initiator port ID %s\n", VAR_3);
 return VAR_7;
}
