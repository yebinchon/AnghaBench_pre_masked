
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_hw_stats {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_devdata {int portcntrnameslen; int portcntrnames; int cntrnameslen; int cntrnames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hfi1_devdata* FUNC_0 (struct ib_device*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ,int,int*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 struct rdma_hw_stats* FUNC_5 (int *,int,int ) ;

__attribute__((used)) static struct rdma_hw_stats *FUNC_6(struct ib_device *VAR_9,
         u8 VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_3(&VAR_2);
 if (!VAR_1) {
  struct hfi1_devdata *VAR_13 = FUNC_0(VAR_9);

  VAR_12 = FUNC_1(VAR_13->cntrnames,
          VAR_13->cntrnameslen,
          VAR_6,
          &VAR_5,
          &VAR_3);
  if (VAR_12) {
   FUNC_4(&VAR_2);
   return ((void*)0);
  }

  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   VAR_3[VAR_5 + VAR_11] =
    VAR_4[VAR_11];

  VAR_12 = FUNC_1(VAR_13->portcntrnames,
          VAR_13->portcntrnameslen,
          0,
          &VAR_7,
          &VAR_8);
  if (VAR_12) {
   FUNC_2(VAR_3);
   VAR_3 = ((void*)0);
   FUNC_4(&VAR_2);
   return ((void*)0);
  }
  VAR_1 = 1;
 }
 FUNC_4(&VAR_2);

 if (!VAR_10)
  return FUNC_5(
    VAR_3,
    VAR_5 + VAR_6,
    VAR_0);
 else
  return FUNC_5(
    VAR_8,
    VAR_7,
    VAR_0);
}
