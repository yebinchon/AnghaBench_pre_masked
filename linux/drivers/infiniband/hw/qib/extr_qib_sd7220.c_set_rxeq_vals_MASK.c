
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {int dummy; } ;
struct TYPE_3__ {int rdesc; int* rdata; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct qib_devdata*,int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  int VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_6 = VAR_0[VAR_4].rdesc & 0xF;
  VAR_7 = VAR_0[VAR_4].rdesc >> 4;
  VAR_9 = FUNC_1(0, VAR_6, VAR_7);
  VAR_8 = VAR_0[VAR_4].rdata[VAR_2];

  VAR_3 = FUNC_2(VAR_1, VAR_9, VAR_8, 0xFF);
  if (VAR_3 < 0)
   break;
 }
 return VAR_3;
}
