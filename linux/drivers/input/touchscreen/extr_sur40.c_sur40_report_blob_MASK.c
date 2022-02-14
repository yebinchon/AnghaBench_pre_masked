
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sur40_blob {scalar_t__ type; int ctr_y; int ctr_x; int pos_y; int pos_x; int bb_size_y; int bb_size_x; int blob_id; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct sur40_blob *VAR_10, struct input_dev *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 if (VAR_10->type != VAR_9)
  return;

 VAR_21 = FUNC_0(VAR_11, VAR_10->blob_id);
 if (VAR_21 < 0 || VAR_21 >= VAR_7)
  return;

 VAR_15 = FUNC_4(VAR_10->bb_size_x);
 VAR_16 = FUNC_4(VAR_10->bb_size_y);

 VAR_17 = FUNC_4(VAR_10->pos_x);
 VAR_18 = FUNC_4(VAR_10->pos_y);

 VAR_19 = FUNC_4(VAR_10->ctr_x);
 VAR_20 = FUNC_4(VAR_10->ctr_y);

 FUNC_2(VAR_11, VAR_21);
 FUNC_1(VAR_11, VAR_8, 1);
 VAR_12 = (VAR_15 > VAR_16);
 VAR_13 = FUNC_5(VAR_15, VAR_16);
 VAR_14 = FUNC_6(VAR_15, VAR_16);

 FUNC_3(VAR_11, VAR_1, VAR_17);
 FUNC_3(VAR_11, VAR_2, VAR_18);
 FUNC_3(VAR_11, VAR_3, VAR_19);
 FUNC_3(VAR_11, VAR_4, VAR_20);


 FUNC_3(VAR_11, VAR_0, VAR_12);
 FUNC_3(VAR_11, VAR_5, VAR_13);
 FUNC_3(VAR_11, VAR_6, VAR_14);
}
