
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_sink {int dummy; } ;
struct dc_link {struct dc_sink* local_sink; } ;


 int FUNC_0 (struct dc_sink*) ;

__attribute__((used)) static void FUNC_1(struct dc_sink *VAR_0, struct dc_link *VAR_1)
{
 FUNC_0(VAR_1->local_sink);
 VAR_1->local_sink = VAR_0;
}
