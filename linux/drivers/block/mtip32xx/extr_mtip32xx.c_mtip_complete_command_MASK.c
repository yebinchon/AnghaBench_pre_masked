
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mtip_cmd {int status; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct request*) ;
 struct request* FUNC_1 (struct mtip_cmd*) ;

__attribute__((used)) static void FUNC_2(struct mtip_cmd *VAR_0, blk_status_t VAR_1)
{
 struct request *VAR_2 = FUNC_1(VAR_0);

 VAR_0->status = VAR_1;
 FUNC_0(VAR_2);
}
