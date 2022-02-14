
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_6, int VAR_7)
{
 u64 VAR_8;
 int VAR_9;

 VAR_8 = VAR_3 | (VAR_7 << VAR_0) | (VAR_2 << VAR_1);
 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 >= 0) {
  FUNC_2(VAR_6, VAR_4, VAR_8);
  FUNC_1(VAR_6, VAR_5);
 }
 return VAR_9;
}
