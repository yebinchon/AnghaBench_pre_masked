
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int idr_mutex; int idr; } ;
struct perf_event {int owner; } ;
struct etr_buf {int refcount; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct etr_buf* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct etr_buf*) ;
 struct etr_buf* FUNC_2 (struct tmc_drvdata*,struct perf_event*,int,void**,int) ;
 int FUNC_3 (int *,struct etr_buf*,scalar_t__,scalar_t__,int ) ;
 struct etr_buf* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct etr_buf*) ;

__attribute__((used)) static struct etr_buf *
FUNC_10(struct tmc_drvdata *VAR_3,
     struct perf_event *VAR_4, int VAR_5,
     void **VAR_6, bool VAR_7)
{
 int VAR_8;
 pid_t VAR_9 = FUNC_8(VAR_4->owner);
 struct etr_buf *VAR_10;

retry:
 FUNC_5(&VAR_3->idr_mutex);
 VAR_10 = FUNC_4(&VAR_3->idr, VAR_9);
 if (VAR_10) {
  FUNC_7(&VAR_10->refcount);
  FUNC_6(&VAR_3->idr_mutex);
  return VAR_10;
 }


 FUNC_6(&VAR_3->idr_mutex);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_10))
  return VAR_10;


 FUNC_5(&VAR_3->idr_mutex);
 VAR_8 = FUNC_3(&VAR_3->idr, VAR_10, VAR_9, VAR_9 + 1, VAR_2);
 FUNC_6(&VAR_3->idr_mutex);


 if (VAR_8 == -VAR_1) {
  FUNC_9(VAR_10);
  goto retry;
 }


 if (VAR_8 == -VAR_0) {
  FUNC_9(VAR_10);
  return FUNC_0(VAR_8);
 }


 return VAR_10;
}
