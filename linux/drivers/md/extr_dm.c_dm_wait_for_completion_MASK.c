
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int wait; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *,int *,long) ;
 scalar_t__ FUNC_5 (long,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct mapped_device *VAR_3, long VAR_4)
{
 int VAR_5 = 0;
 FUNC_0(VAR_2);

 while (1) {
  FUNC_4(&VAR_3->wait, &VAR_2, VAR_4);

  if (!FUNC_3(VAR_3))
   break;

  if (FUNC_5(VAR_4, VAR_1)) {
   VAR_5 = -VAR_0;
   break;
  }

  FUNC_2();
 }
 FUNC_1(&VAR_3->wait, &VAR_2);

 return VAR_5;
}
