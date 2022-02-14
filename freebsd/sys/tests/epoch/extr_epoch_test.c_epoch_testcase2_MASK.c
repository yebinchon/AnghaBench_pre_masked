
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct epoch_tracker {int dummy; } ;
struct epoch_test_instance {int threadid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct epoch_tracker*) ;
 int FUNC_2 (int ,struct epoch_tracker*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct mtx*) ;
 struct mtx VAR_1 ;
 int FUNC_6 (char*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct epoch_test_instance *VAR_4)
{
 int VAR_5, VAR_6;
 struct mtx *VAR_7;
 struct epoch_tracker VAR_8;

 VAR_6 = VAR_3;
 VAR_5 = 0;
 VAR_7 = &VAR_1;

 while (VAR_5 < VAR_0) {
  FUNC_1(VAR_2, &VAR_8);
  FUNC_4(VAR_7);
  FUNC_0(1);
  VAR_5++;
  FUNC_5(VAR_7);
  FUNC_2(VAR_2, &VAR_8);
  FUNC_3(VAR_2);
 }
 FUNC_6("test2: thread: %d took %d ticks to complete %d iterations\n",
     VAR_4->threadid, VAR_3 - VAR_6, VAR_0);
}
