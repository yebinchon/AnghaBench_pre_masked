
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mconsole_output {int list; struct mc_request* req; } ;
struct mc_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mc_request*,char*,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 void FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(struct mc_request *VAR_2, void (*VAR_3)(void *),
    void *VAR_4)
{
 struct mconsole_output VAR_5;
 unsigned long VAR_6;

 VAR_5.req = VAR_2;
 FUNC_3(&VAR_0, VAR_6);
 FUNC_0(&VAR_5.list, &VAR_1);
 FUNC_4(&VAR_0, VAR_6);

 (*VAR_3)(VAR_4);

 FUNC_2(VAR_2, "", 0, 0, 0);

 FUNC_3(&VAR_0, VAR_6);
 FUNC_1(&VAR_5.list);
 FUNC_4(&VAR_0, VAR_6);
}
