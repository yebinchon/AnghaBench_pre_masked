
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dmar_unit*,int ,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct dmar_unit *VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = 0;
 if ((VAR_7 & VAR_4) != 0) {
  FUNC_1("DMAR%d: Invalidation timed out\n", VAR_6->unit);
  VAR_8 |= VAR_4;
 }
 if ((VAR_7 & VAR_2) != 0) {
  FUNC_1("DMAR%d: Invalidation completion error\n",
      VAR_6->unit);
  VAR_8 |= VAR_2;
 }
 if ((VAR_7 & VAR_3) != 0) {
  FUNC_1("DMAR%d: Invalidation queue error\n",
      VAR_6->unit);
  VAR_8 |= VAR_3;
 }
 if ((VAR_7 & VAR_1) != 0) {
  FUNC_1("DMAR%d: Advanced pending fault\n", VAR_6->unit);
  VAR_8 |= VAR_1;
 }
 if ((VAR_7 & VAR_0) != 0) {
  FUNC_1("DMAR%d: Advanced fault overflow\n", VAR_6->unit);
  VAR_8 |= VAR_0;
 }
 if (VAR_8 != 0)
  FUNC_0(VAR_6, VAR_5, VAR_8);
}
