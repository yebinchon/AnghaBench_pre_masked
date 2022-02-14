
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; struct device_node* of_node; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long) ;
 TYPE_1__* VAR_6 ;
 struct macio_chip* FUNC_5 (struct device_node*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int) ;

__attribute__((used)) static long
FUNC_7(struct device_node *VAR_9, long VAR_10, long VAR_11)
{
 struct macio_chip* VAR_12;
 u8 VAR_13;
 unsigned long VAR_14;


 if (VAR_9 == ((void*)0)) {
  if (VAR_6[0].type != VAR_8 &&
      VAR_6[0].type != VAR_7)
   return -VAR_0;
  VAR_9 = VAR_6[0].of_node;
 }
 VAR_12 = FUNC_5(VAR_9, 0);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = FUNC_2(VAR_5);
 VAR_13 |= VAR_3;
 VAR_13 &= ~VAR_2;

 if (!VAR_11) {
  FUNC_0(VAR_14);
  FUNC_3(VAR_5, VAR_13);
  FUNC_4(VAR_14);
  (void)FUNC_2(VAR_5);
  FUNC_6(250);
 }
 FUNC_0(VAR_14);
 if (VAR_11) {
  FUNC_3(VAR_4,
   VAR_3);
  FUNC_4(VAR_14);
  (void)FUNC_1(VAR_1);
  FUNC_6(250);
 } else {
  FUNC_3(VAR_4,
   VAR_3 | VAR_2);
  FUNC_4(VAR_14);
 }
 if (VAR_11) {
  FUNC_0(VAR_14);
  FUNC_3(VAR_5, VAR_13 | VAR_2);
  (void)FUNC_2(VAR_5);
  FUNC_4(VAR_14); FUNC_6(250); FUNC_0(VAR_14);
  FUNC_3(VAR_5, VAR_13);
  (void)FUNC_2(VAR_5);
  FUNC_4(VAR_14); FUNC_6(250); FUNC_0(VAR_14);
  FUNC_3(VAR_5, VAR_13 | VAR_2);
  (void)FUNC_2(VAR_5);
  FUNC_4(VAR_14); FUNC_6(250);
 }
 return 0;
}
