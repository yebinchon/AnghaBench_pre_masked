
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct epoch_tracker {int dummy; } ;
struct epoch_test_instance {int threadid; } ;


 int FUNC_0 (int ,struct epoch_tracker*) ;
 int FUNC_1 (int ,struct epoch_tracker*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;
 struct mtx VAR_1 ;
 struct mtx VAR_2 ;
 int FUNC_5 (char*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct epoch_test_instance *VAR_5)
{
 int VAR_6, VAR_7;
 struct mtx *VAR_8;
 struct epoch_tracker VAR_9;

 VAR_7 = VAR_4;
 VAR_6 = 0;
 if (VAR_5->threadid & 0x1)
  VAR_8 = &VAR_1;
 else
  VAR_8 = &VAR_2;

 while (VAR_6 < VAR_0) {
  FUNC_0(VAR_3, &VAR_9);
  FUNC_3(VAR_8);
  VAR_6++;
  FUNC_4(VAR_8);
  FUNC_1(VAR_3, &VAR_9);
  FUNC_2(VAR_3);
 }
 FUNC_5("test1: thread: %d took %d ticks to complete %d iterations\n",
     VAR_5->threadid, VAR_4 - VAR_7, VAR_0);
}
