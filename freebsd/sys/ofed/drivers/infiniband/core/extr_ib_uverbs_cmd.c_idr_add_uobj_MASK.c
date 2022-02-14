
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct ib_uobject {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idr*,struct ib_uobject*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct idr *VAR_3, struct ib_uobject *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_0);
 FUNC_3(&VAR_2);

 VAR_5 = FUNC_0(VAR_3, VAR_4, 0, 0, VAR_1);
 if (VAR_5 >= 0)
  VAR_4->id = VAR_5;

 FUNC_4(&VAR_2);
 FUNC_2();

 return VAR_5 < 0 ? VAR_5 : 0;
}
