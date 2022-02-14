
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int node_p ;
typedef int hook_p ;
typedef TYPE_3__* hinfo_p ;
struct TYPE_9__ {TYPE_2__* out; TYPE_1__* in; } ;
struct TYPE_8__ {char* thisHook; } ;
struct TYPE_7__ {char* thisHook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_6, hook_p VAR_7, const char *VAR_8)
{
 hinfo_p VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1, VAR_2 | VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_7, VAR_9);
 if ((VAR_10 = FUNC_3(VAR_7, &VAR_4)) != 0) {
  FUNC_1(VAR_9, VAR_1);
  return (VAR_10);
 }


 if ((VAR_10 = FUNC_4(VAR_7, &VAR_5)) != 0) {
  FUNC_1(VAR_9, VAR_1);
  return (VAR_10);
 }







 FUNC_5(VAR_9->in->thisHook, VAR_8, sizeof(VAR_9->in->thisHook) - 1);
 VAR_9->in->thisHook[sizeof(VAR_9->in->thisHook) - 1] = '\0';
 FUNC_5(VAR_9->out->thisHook, VAR_8, sizeof(VAR_9->out->thisHook) - 1);
 VAR_9->out->thisHook[sizeof(VAR_9->out->thisHook) - 1] = '\0';
 return (0);
}
