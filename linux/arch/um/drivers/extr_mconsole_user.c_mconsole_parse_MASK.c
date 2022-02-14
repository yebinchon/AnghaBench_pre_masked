
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mconsole_command {int command; } ;
struct TYPE_2__ {int data; } ;
struct mc_request {TYPE_1__ request; } ;


 int FUNC_0 (struct mconsole_command*) ;
 struct mconsole_command* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static struct mconsole_command *FUNC_3(struct mc_request *VAR_1)
{
 struct mconsole_command *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (!FUNC_2(VAR_1->request.data, VAR_2->command,
       FUNC_1(VAR_2->command))) {
   return VAR_2;
  }
 }
 return ((void*)0);
}
