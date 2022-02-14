
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct helper_data {TYPE_1__* helper; int connect; } ;
struct TYPE_2__ {int out; int in; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (struct transport*) ;
 int FUNC_3 (struct transport*,char const*,char const*) ;

__attribute__((used)) static int FUNC_4(struct transport *VAR_0, const char *VAR_1,
     const char *VAR_2, int VAR_3[2])
{
 struct helper_data *VAR_4 = VAR_0->data;


 FUNC_2(VAR_0);
 if (!VAR_4->connect)
  FUNC_1(FUNC_0("operation not supported by protocol"));

 if (!FUNC_3(VAR_0, VAR_1, VAR_2))
  FUNC_1(FUNC_0("can't connect to subservice %s"), VAR_1);

 VAR_3[0] = VAR_4->helper->out;
 VAR_3[1] = VAR_4->helper->in;
 return 0;
}
