
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct sa1111_dev {TYPE_1__ res; } ;
struct ps2if {int io; } ;


 int FUNC_0 (struct ps2if*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct ps2if* FUNC_3 (struct sa1111_dev*) ;
 int FUNC_4 (struct sa1111_dev*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sa1111_dev *VAR_0)
{
 struct ps2if *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_1->io);
 FUNC_1(VAR_0->res.start, FUNC_2(&VAR_0->res));
 FUNC_4(VAR_0, ((void*)0));

 FUNC_0(VAR_1);

 return 0;
}
