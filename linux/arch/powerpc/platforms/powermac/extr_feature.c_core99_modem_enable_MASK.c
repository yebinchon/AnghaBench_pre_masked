
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (unsigned long) ;
 TYPE_1__* VAR_6 ;
 struct macio_chip* FUNC_7 (struct device_node*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int) ;

__attribute__((used)) static long
FUNC_9(struct device_node *VAR_8, long VAR_9, long VAR_10)
{
 struct macio_chip* VAR_11;
 u8 VAR_12;
 unsigned long VAR_13;


 if (VAR_8 == ((void*)0)) {
  if (VAR_6[0].type != VAR_7)
   return -VAR_0;
  VAR_8 = VAR_6[0].of_node;
 }
 VAR_11 = FUNC_7(VAR_8, 0);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = FUNC_4(VAR_5);
 VAR_12 |= VAR_3;
 VAR_12 &= ~VAR_2;

 if (!VAR_10) {
  FUNC_0(VAR_13);
  FUNC_5(VAR_5, VAR_12);
  FUNC_6(VAR_13);
  (void)FUNC_4(VAR_5);
  FUNC_8(250);
 }
 FUNC_0(VAR_13);
 if (VAR_10) {
  FUNC_1(VAR_1, VAR_4);
  FUNC_6(VAR_13);
  (void)FUNC_3(VAR_1);
  FUNC_8(250);
 } else {
  FUNC_2(VAR_1, VAR_4);
  FUNC_6(VAR_13);
 }
 if (VAR_10) {
  FUNC_0(VAR_13);
  FUNC_5(VAR_5, VAR_12 | VAR_2);
  (void)FUNC_4(VAR_5);
  FUNC_6(VAR_13); FUNC_8(250); FUNC_0(VAR_13);
  FUNC_5(VAR_5, VAR_12);
  (void)FUNC_4(VAR_5);
  FUNC_6(VAR_13); FUNC_8(250); FUNC_0(VAR_13);
  FUNC_5(VAR_5, VAR_12 | VAR_2);
  (void)FUNC_4(VAR_5);
  FUNC_6(VAR_13); FUNC_8(250);
 }
 return 0;
}
