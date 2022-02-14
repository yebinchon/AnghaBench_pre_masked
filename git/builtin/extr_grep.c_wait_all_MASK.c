
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,void**) ;
 int FUNC_8 (int *) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_13 = 0;
 int VAR_14;

 if (!VAR_0)
  FUNC_0("Never call this function unless you have started threads");

 FUNC_2();
 VAR_1 = 1;


 while (VAR_11 != VAR_12)
  FUNC_6(&VAR_3, &VAR_6);




 FUNC_4(&VAR_2);
 FUNC_3();

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  void *VAR_15;
  FUNC_7(VAR_10[VAR_14], &VAR_15);
  VAR_13 |= (int) (intptr_t) VAR_15;
 }

 FUNC_1(VAR_10);

 FUNC_8(&VAR_6);
 FUNC_8(&VAR_7);
 FUNC_8(&VAR_5);
 FUNC_5(&VAR_2);
 FUNC_5(&VAR_4);
 FUNC_5(&VAR_3);
 VAR_8 = 0;

 return VAR_13;
}
