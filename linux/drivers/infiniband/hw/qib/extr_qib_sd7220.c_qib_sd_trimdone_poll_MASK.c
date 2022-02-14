
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qib_devdata*,char*,int) ;
 int FUNC_2 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_3)
{
 int VAR_4, VAR_5;
 uint64_t VAR_6;





 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_6 = FUNC_2(VAR_3, VAR_2);
  if (VAR_6 & VAR_0) {
   VAR_5 = 1;
   break;
  }
  FUNC_0(20);
 }
 if (VAR_4 >= VAR_1) {
  FUNC_1(VAR_3, "No TRIMDONE in %d tries\n", VAR_4);
  VAR_5 = 0;
 }
 return VAR_5;
}
