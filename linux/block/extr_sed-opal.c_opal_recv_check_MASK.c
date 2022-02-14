
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ outstandingData; scalar_t__ minTransfer; } ;
struct opal_header {TYPE_1__ cp; } ;
struct opal_dev {void* resp; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (struct opal_dev*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_1)
{
 size_t VAR_2 = VAR_0;
 void *VAR_3 = VAR_1->resp;
 struct opal_header *VAR_4 = VAR_3;
 int VAR_5;

 do {
  FUNC_2("Sent OPAL command: outstanding=%d, minTransfer=%d\n",
    VAR_4->cp.outstandingData,
    VAR_4->cp.minTransfer);

  if (VAR_4->cp.outstandingData == 0 ||
      VAR_4->cp.minTransfer != 0)
   return 0;

  FUNC_0(VAR_3, 0, VAR_2);
  VAR_5 = FUNC_1(VAR_1);
 } while (!VAR_5);

 return VAR_5;
}
