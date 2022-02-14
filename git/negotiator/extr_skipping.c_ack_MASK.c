
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fetch_negotiator {int data; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct commit*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fetch_negotiator *VAR_2, struct commit *VAR_3)
{
 int VAR_4 = !!(VAR_3->object.flags & VAR_0);
 if (!(VAR_3->object.flags & VAR_1))
  FUNC_0("received ack for commit %s not sent as 'have'\n",
      FUNC_2(&VAR_3->object.oid));
 FUNC_1(VAR_2->data, VAR_3);
 return VAR_4;
}
