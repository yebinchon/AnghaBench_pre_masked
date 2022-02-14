
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct npu_link {int assignment_done; scalar_t__* fn_desired_actags; TYPE_1__* fn_actags; int dev; int bus; int domain; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,int ,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct npu_link *VAR_1)
{
 u16 VAR_2, VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  VAR_4 += VAR_1->fn_desired_actags[VAR_5];

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (VAR_1->fn_desired_actags[VAR_5]) {
   VAR_2 = FUNC_1(
    VAR_1->fn_desired_actags[VAR_5],
    VAR_4);
   VAR_1->fn_actags[VAR_5].start = VAR_3;
   VAR_1->fn_actags[VAR_5].count = VAR_2;
   VAR_3 += VAR_2;
   FUNC_0(VAR_3 >= VAR_0);
  }
  FUNC_2("link %x:%x:%x fct %d actags: start=%d count=%d (desired=%d)\n",
   VAR_1->domain, VAR_1->bus, VAR_1->dev, VAR_5,
   VAR_1->fn_actags[VAR_5].start, VAR_1->fn_actags[VAR_5].count,
   VAR_1->fn_desired_actags[VAR_5]);
 }
 VAR_1->assignment_done = 1;
}
