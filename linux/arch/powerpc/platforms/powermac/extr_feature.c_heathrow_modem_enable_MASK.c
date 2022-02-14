
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ model_id; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (unsigned long) ;
 struct macio_chip* FUNC_7 (struct device_node*,int ) ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static long FUNC_9(struct device_node *VAR_8, long VAR_9,
      long VAR_10)
{
 struct macio_chip* VAR_11;
 u8 VAR_12;
 unsigned long VAR_13;

 VAR_11 = FUNC_7(VAR_8, VAR_6);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = FUNC_4(VAR_2) & ~1;
 if (!VAR_10) {
  FUNC_0(VAR_13);
  FUNC_5(VAR_2, VAR_12);
  FUNC_6(VAR_13);
  (void)FUNC_4(VAR_2);
  FUNC_8(250);
 }
 if (VAR_7.model_id != VAR_5 &&
     VAR_7.model_id != VAR_4) {
  FUNC_0(VAR_13);
  if (VAR_10)
   FUNC_1(VAR_1, VAR_3);
  else
   FUNC_2(VAR_1, VAR_3);
  FUNC_6(VAR_13);
  (void)FUNC_3(VAR_1);
  FUNC_8(250);
 }
 if (VAR_10) {
  FUNC_0(VAR_13);
  FUNC_5(VAR_2, VAR_12 | 1);
  (void)FUNC_4(VAR_2);
  FUNC_6(VAR_13); FUNC_8(250); FUNC_0(VAR_13);
  FUNC_5(VAR_2, VAR_12);
  (void)FUNC_4(VAR_2);
  FUNC_6(VAR_13); FUNC_8(250); FUNC_0(VAR_13);
  FUNC_5(VAR_2, VAR_12 | 1);
  (void)FUNC_4(VAR_2);
  FUNC_6(VAR_13); FUNC_8(250);
 }
 return 0;
}
