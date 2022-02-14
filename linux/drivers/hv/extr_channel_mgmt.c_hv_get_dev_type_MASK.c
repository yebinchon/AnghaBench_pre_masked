
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {int if_type; } ;
struct TYPE_5__ {TYPE_1__ offer; } ;
struct vmbus_channel {TYPE_2__ offermsg; } ;
typedef int guid_t ;
struct TYPE_6__ {int guid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (struct vmbus_channel const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (char*,int const*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static u16 FUNC_4(const struct vmbus_channel *VAR_3)
{
 const guid_t *VAR_4 = &VAR_3->offermsg.offer.if_type;
 u16 VAR_5;

 if (FUNC_1(VAR_3) || FUNC_2(VAR_4))
  return VAR_1;

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_4, &VAR_2[VAR_5].guid))
   return VAR_5;
 }
 FUNC_3("Unknown GUID: %pUl\n", VAR_4);
 return VAR_5;
}
