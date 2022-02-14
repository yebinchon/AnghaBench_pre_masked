
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct dn_queue {TYPE_1__ ni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_queue*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 struct dn_queue *VAR_4 = VAR_2;

 if (VAR_4->ni.length == 0) {
  FUNC_0(VAR_4, VAR_1);
  return VAR_0;
 }

 return 0;
}
