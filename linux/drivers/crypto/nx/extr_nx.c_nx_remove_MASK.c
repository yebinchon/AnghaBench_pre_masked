
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vio_dev {int unit_address; int dev; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_1__ of; } ;


 int FUNC_0 (TYPE_2__*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct vio_dev *VAR_23)
{
 FUNC_1(&VAR_23->dev, "entering nx_remove for UA 0x%x\n",
  VAR_23->unit_address);

 if (VAR_16.of.status == VAR_9) {
  FUNC_0(&VAR_16);

  FUNC_4(&VAR_20,
        VAR_0, VAR_7, -1);
  FUNC_4(&VAR_22,
        VAR_1, VAR_8, VAR_10);
  FUNC_4(&VAR_21,
        VAR_1, VAR_8, VAR_11);
  FUNC_2(&VAR_13,
       VAR_0, VAR_3);
  FUNC_2(&VAR_14, VAR_0, VAR_3);
  FUNC_2(&VAR_18,
       VAR_0, VAR_6);
  FUNC_2(&VAR_19,
       VAR_0, VAR_6);
  FUNC_3(&VAR_15,
      VAR_0, VAR_4);
  FUNC_3(&VAR_12, VAR_0, VAR_2);
  FUNC_3(&VAR_17, VAR_0, VAR_5);
 }

 return 0;
}
