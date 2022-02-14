
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ib_device {int unreg_completion; int index; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_device*,scalar_t__) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct ib_device *VAR_5)
{
 u32 VAR_6;

 FUNC_0(!FUNC_4(&VAR_5->refcount));

 FUNC_2(&VAR_3);
 FUNC_10(&VAR_2, VAR_5->index, VAR_0);
 FUNC_8(&VAR_3);







 FUNC_1(&VAR_1);
 VAR_6 = VAR_4;
 FUNC_7(&VAR_1);
 while (VAR_6) {
  VAR_6--;
  FUNC_5(VAR_5, VAR_6);
 }


 FUNC_3(VAR_5);
 FUNC_9(&VAR_5->unreg_completion);






 FUNC_6(VAR_5);
}
