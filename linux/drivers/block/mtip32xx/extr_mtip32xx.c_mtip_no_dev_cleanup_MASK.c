
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mtip_cmd {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 struct mtip_cmd* FUNC_1 (struct request*) ;

__attribute__((used)) static bool FUNC_2(struct request *VAR_1, void *VAR_2, bool VAR_3)
{
 struct mtip_cmd *VAR_4 = FUNC_1(VAR_1);

 VAR_4->status = VAR_0;
 FUNC_0(VAR_1);
 return 1;
}
