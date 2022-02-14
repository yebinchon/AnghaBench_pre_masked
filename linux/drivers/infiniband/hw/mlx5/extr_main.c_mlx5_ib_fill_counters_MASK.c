
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mlx5_ib_dev {int mdev; } ;
struct TYPE_8__ {char* name; size_t offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_11,
      const char **VAR_12,
      size_t *VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_0); VAR_14++, VAR_15++) {
  VAR_12[VAR_15] = VAR_0[VAR_14].name;
  VAR_13[VAR_15] = VAR_0[VAR_14].offset;
 }

 if (FUNC_1(VAR_11->mdev, VAR_6)) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7); VAR_14++, VAR_15++) {
   VAR_12[VAR_15] = VAR_7[VAR_14].name;
   VAR_13[VAR_15] = VAR_7[VAR_14].offset;
  }
 }

 if (FUNC_1(VAR_11->mdev, VAR_9)) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++, VAR_15++) {
   VAR_12[VAR_15] = VAR_8[VAR_14].name;
   VAR_13[VAR_15] = VAR_8[VAR_14].offset;
  }
 }

 if (FUNC_1(VAR_11->mdev, VAR_3)) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++, VAR_15++) {
   VAR_12[VAR_15] = VAR_5[VAR_14].name;
   VAR_13[VAR_15] = VAR_5[VAR_14].offset;
  }
 }

 if (FUNC_1(VAR_11->mdev, VAR_1)) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_2); VAR_14++, VAR_15++) {
   VAR_12[VAR_15] = VAR_2[VAR_14].name;
   VAR_13[VAR_15] = VAR_2[VAR_14].offset;
  }
 }

 if (FUNC_2(VAR_11->mdev, VAR_10)) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++, VAR_15++) {
   VAR_12[VAR_15] = VAR_4[VAR_14].name;
   VAR_13[VAR_15] = VAR_4[VAR_14].offset;
  }
 }
}
