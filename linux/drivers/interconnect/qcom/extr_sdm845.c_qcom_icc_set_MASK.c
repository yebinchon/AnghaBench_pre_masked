
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs_cmd {int dummy; } ;
struct qcom_icc_provider {int num_bcms; int dev; TYPE_1__** bcms; } ;
struct list_head {int dummy; } ;
struct icc_node {int provider; } ;
struct TYPE_2__ {scalar_t__* vote_x; scalar_t__* vote_y; int list; scalar_t__ dirty; } ;


 int FUNC_0 (struct list_head*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (struct list_head*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,struct tcs_cmd*,int*) ;
 int FUNC_7 (struct list_head*,size_t,struct tcs_cmd*,int*) ;
 struct qcom_icc_provider* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct icc_node *VAR_8, struct icc_node *VAR_9)
{
 struct qcom_icc_provider *VAR_10;
 struct icc_node *VAR_11;
 struct tcs_cmd VAR_12[VAR_6];
 struct list_head VAR_13;
 int VAR_14[VAR_7];
 int VAR_15 = 0, VAR_16;

 if (!VAR_8)
  VAR_11 = VAR_9;
 else
  VAR_11 = VAR_8;

 VAR_10 = FUNC_8(VAR_11->provider);

 FUNC_0(&VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_10->num_bcms; VAR_16++) {
  if (VAR_10->bcms[VAR_16]->dirty) {
   FUNC_1(VAR_10->bcms[VAR_16]);
   FUNC_2(&VAR_10->bcms[VAR_16]->list, &VAR_13);
  }
 }





 FUNC_7(&VAR_13, VAR_0, VAR_12, VAR_14);

 if (!VAR_14[0])
  return VAR_15;

 VAR_15 = FUNC_5(VAR_10->dev);
 if (VAR_15) {
  FUNC_4("Error invalidating RPMH client (%d)\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_6(VAR_10->dev, VAR_3,
          VAR_12, VAR_14);
 if (VAR_15) {
  FUNC_4("Error sending AMC RPMH requests (%d)\n", VAR_15);
  return VAR_15;
 }

 FUNC_0(&VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_10->num_bcms; VAR_16++) {





  if (VAR_10->bcms[VAR_16]->vote_x[VAR_2] !=
      VAR_10->bcms[VAR_16]->vote_x[VAR_1] ||
      VAR_10->bcms[VAR_16]->vote_y[VAR_2] !=
      VAR_10->bcms[VAR_16]->vote_y[VAR_1]) {
   FUNC_2(&VAR_10->bcms[VAR_16]->list, &VAR_13);
  }
 }

 if (FUNC_3(&VAR_13))
  return VAR_15;

 FUNC_7(&VAR_13, VAR_2, VAR_12, VAR_14);

 VAR_15 = FUNC_6(VAR_10->dev, VAR_5, VAR_12, VAR_14);
 if (VAR_15) {
  FUNC_4("Error sending WAKE RPMH requests (%d)\n", VAR_15);
  return VAR_15;
 }

 FUNC_7(&VAR_13, VAR_1, VAR_12, VAR_14);

 VAR_15 = FUNC_6(VAR_10->dev, VAR_4, VAR_12, VAR_14);
 if (VAR_15) {
  FUNC_4("Error sending SLEEP RPMH requests (%d)\n", VAR_15);
  return VAR_15;
 }

 return VAR_15;
}
