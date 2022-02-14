
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct request {int dummy; } ;
struct nbd_cmd {int cmd_cookie; } ;


 int VAR_0 ;
 struct request* FUNC_0 (struct nbd_cmd*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static u64 FUNC_2(struct nbd_cmd *VAR_1)
{
 struct request *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4 = VAR_1->cmd_cookie;

 return (VAR_4 << VAR_0) | VAR_3;
}
